#include <cstring>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

class Node
{
	private:
		string _author;
		string _song;
		Node *_preview;
		Node *_next;
	public:
		Node(string author, string song)
		{
			_author = author;
			_song = song;
			_next = NULL;
			_preview = NULL;
		}

		~Node()
		{
			delete _next;
		}
		
		string author()
		{
			return this->_author;
		}
		
		void author(string author)
		{
			this->_author = author;
		}

		string song()
		{
			return this->_song;
		}

		void song(string song)
		{
			this->_song = song;
		}

		Node* next()
		{
			return this->_next;
		}

		void next(Node *next)
		{
			this->_next = next;
		}

		Node* preview()
		{
			return this->_preview;
		}

		void preview(Node *preview)
		{
			this->_preview = preview;
		}
};

class PlayList
{
	private:
		Node *initial;
		Node *final;
		Node *actual;
		unsigned int _size;
		bool random;

		/**
		 * Busca y retorna un nodo por su posicion
		 */
		Node* search(int pos)
		{
			Node *aux = initial;
			for (int i = 0; i < pos; ++i)
				aux = aux->next();
			return aux;
		}

		/**
		 * Cambia los valores de un nodo 'A' a un nodo 'B' y los del 'B' al 'A'
		 */
		void swap(int i, int j)
		{
			Node *a = search(i);
			Node *b = search(j);

			string a_author = a->author();
			string a_song = a->song();

			string b_author = b->author();
			string b_song = b->song();

			replace(i, b_author, b_song);
			replace(j, a_author, a_song);
		}

		/**
		 * Remplaza los valores de un nodo
		 */
		void replace(int pos, string author, string song)
		{
			Node *aux = search(pos);
			aux->author(author);
			aux->song(song);
		}

	public:
		PlayList()
		{
			initial = NULL;
			final = NULL;
			actual = NULL;
			_size = 0;
			random = false;
		}
		
		~PlayList(){}

		/**
		* Verifica si la lista esta vacia
		*/
		bool empty()
		{
			return initial == NULL;
		}

		/**
		* Agrega un nodo a la lista posicionandolo al inicio de ella
		*/
		void add(string author, string song)
		{
			Node *new_node = new Node(author, song);
			if(empty())
			{
				initial = new_node;
				final = new_node;
			}

			else
			{
				new_node->next(initial);
				initial->preview(new_node);
				initial = new_node;
			}

			actual = initial;
			++_size;
		}
	
		/**
		* Adelanta una posicion al nodo actual
		*/
		void before()
		{
			actual = actual->preview();
			if(actual->preview() == NULL) actual = final;
		}

		/**
		* Retraza una posicion al nodo actual
		*/
		void after()
		{
			actual = actual->next();
			if(actual == NULL) actual = initial;
		}

		/**
		 * verifica si la lista esta en modo aleatoreo
		 */
		bool is_random()
		{
			return random;
		}

		/**
		 * activa o desactiva el modo aleatoreo
		 */
		void enable_disable()
		{
			random = !random;
		}

		/**
		 * selecciona una posicion a la zar de la lista
		 */
		void randomize()
		{
			int song = rand() % _size;
			Node *aux = initial;
			for (int i = 0; i < song; ++i) aux = aux->next();
			actual = aux;
		}

		/**
		 * Muestra la lista
		 */
		void show()
		{
			Node *aux = initial;
			while(aux)
			{
				// Verificar si el nodo aux es igual al actual para poner el *
				cout << (actual->author() == aux->author() ? "* " : "") << aux->author() << setw(20) << aux->song() << endl;
				aux = aux->next();
			}
			cout << endl;

			cout << "[S] Aleatorio" << endl;
			cout << "[B] Siguente" << endl;
			cout << "[Z] Anterior" << endl;
			cout << "[L] Añadir" << endl;
			cout << "[E] Eliminar" << endl;
			cout << "[1] Titulos" << endl;
			cout << "[2] Autores" << endl;
			cout << "[X] Salir" << endl << endl;
		}

		/**
		 * Elimina un nodo de la lista
		 */
		void erase()
		{
			if (actual) 
			{
				if(actual == initial)
				{
					initial = initial->next();
					actual->next(NULL);
					delete actual;
					actual = initial;
				}

				else if(actual == final)
				{
					final = final->preview();
					actual->preview(NULL);
					delete actual;
					actual = final;
				}

				else
				{
					Node *aux = actual->preview();
					aux->next(actual->next());
					actual->next(NULL);
					actual->preview(NULL);
					delete actual;
					actual = aux->next();
				}
				--_size;
			}
		}

		void orderByAuthor()
		{
			for (int i = 0; i < _size; ++i)
				for (int j = 0; j < _size; ++j)
					if (search(i)->author()[0] < search(j)->author()[0])
						swap(i, j);
			actual = initial;
		}

		void orderBySong()
		{
			for (int i = 0; i < _size; ++i)
				for (int j = 0; j < _size; ++j)
					if (search(i)->song()[0] < search(j)->song()[0])
						swap(i, j);
			actual = initial;
		}
};

int main(int argc, char const *argv[])
{
//	srand(time(NULL));

	int op = 0;
	char opt = 'S';
	string author;
	string song;

	PlayList spoty;

	/**
	 *	Preload
	 */
	spoty.add("Slipknot", "Sulfur");
	spoty.add("A7X", "The Stage");
	spoty.add("Linkin Park", "We Made It");
	spoty.add("Aphex Twim", "Music Makers");
	spoty.add("BFMV", "Disappear");
	spoty.add("Disturbed", "Inside The Fire");
	spoty.add("Negas", "So What?");
	spoty.add("Molotov", "Yofo");
	spoty.add("Tame Impala", "Beverly");
	spoty.add("Astronaut", "Apollo");

	spoty.show();

	cout << "opcion: ";
do {
	cin >> opt;

	switch(opt) {
		case 's':
			spoty.randomize();
			spoty.show();
			break;
		case 'b':
			spoty.after();
			spoty.show();
			break;

		case 'z':
			spoty.before();
			spoty.show();
			break;

		case 'l':
			scanf("%s %s", &author, &song);
			spoty.add(author, song);
			spoty.show();
			break;

		case 'e':
			spoty.erase();
			spoty.show();
			break;

		case '1':
			spoty.orderBySong();
			spoty.show();
			break;

		case '2':
			spoty.orderByAuthor();
			spoty.show();
			break;
	}

} while (opt != 'x');

/*
	for (int i = 0; i < 10; ++i) 
	{  
		spoty.add(author, song);
		author = "";
		author += char(65 + i);
		song = "";
		song += char(90 - i);
	}
*/
//	spoty.show();

	return 0;
}
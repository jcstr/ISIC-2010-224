using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using Microsoft.VisualBasic;
namespace Editor
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void nuevoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se utiliza el metodo clear para limpiar el texto del rich textbox
            editor.Clear();
        }

        private void abrirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se crea un objeto de openfiledialogo que nos servira para abrir archivos
            OpenFileDialog Open = new OpenFileDialog();
            System.IO.StreamReader myStreamReader = null;
            
            //se especifica que tipos de archivos se podran abrir y se verifica si existe
            Open.Filter = "Text [*.txt*]|*.txt|All Files [*,*]|*,*";
            Open.CheckFileExists = true;
            Open.Title = "Abrir Archivo";
            Open.ShowDialog(this);

            try
            {
                //este codigo se utiliza para que se pueda pueda mostrar la informacion del archivo que queremos abrir en el rich textbox
                Open.OpenFile();
                myStreamReader = System.IO.File.OpenText(Open.FileName);
                editor.Text = myStreamReader.ReadToEnd();

            }
            catch (Exception) {
                
            }

        }

        private void guardarComoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se crea un objeto de tipo savefiledialog que nos servira para guardar el archivo
            SaveFileDialog Save = new SaveFileDialog();
            System.IO.StreamWriter myStreamWriter = null;
            //al igual que para abrir el tipo de documentos aqui se especifica en que extenciones se puede guardar el archivo
            Save.Filter = "Text (*.txt)|*.txt|HTML(*.html*)|*.html|All files(*.*)|*.*";
            Save.CheckPathExists = true;
            Save.Title = "Guardar como";
            Save.ShowDialog(this);
            try
            {
                //este codigo se utiliza para guardar el archivo de nuestro editor
                myStreamWriter = System.IO.File.AppendText(Save.FileName);
                myStreamWriter.Write(editor.Text);
                myStreamWriter.Flush();

            }
            catch (Exception) {

            }
        }

        private void salirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se utiliza el metodo close para cerrar el formulario
            Close();
        }

        private void deshacerToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se utiliza el metodo undo en el rich textbox para volver atras
            editor.Undo();
        }

        private void rehacerToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se utiliza el metodo redo en le rich textbox para regresar adelante
            editor.Redo();
        }

        private void copiarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se utilza el metodo copy para copiar lo que este seleccionado en el rich textbox
            editor.Copy();
        }

        private void pegarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se utilza el metodo paste para pegar lo que tenemos copiado en el rich textbox
            editor.Paste();
        }

        private void seleccionarTodoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se utilza el metodo SellecAll para seleccionar todo lo que este en el rich textbox
            editor.SelectAll();
        }

        private void borrarTodoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se utiliza el metodo clear para limpiar el texto del rich textbox
            editor.Clear();
        }

        private void colorDeFuenteToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se crea un objeto de tipo colordialog que servira para cabiar color de la fuente 
            ColorDialog color = new ColorDialog();
            //se hace la condicion para cambiar el color de la fuente al presionar el boton ok 
            if (color.ShowDialog() == DialogResult.OK)
            {
                editor.ForeColor = color.Color;
            }
        }

        private void colorDeFondoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se crea un objeto de tipo colordialog que servira para cabiar color del rich textbox
            ColorDialog fondo = new ColorDialog();
            //se hace la condicion para cambiar el tipo de color del rich textbox al presionar el boton ok
            if (fondo.ShowDialog() == DialogResult.OK)
            {
                editor.BackColor = fondo.Color;
            }
        }

        private void cortarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //se utilza el metodo cut para cortar lo que este seleccionado en el rich textbox
            editor.Cut();
        }

        private void buscarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            string buscador = "";
            int inicio = 0, final = 0;

            // limpiar coincidencias
            editor.SelectAll();
            editor.SelectionBackColor = Color.White;
            buscador = Microsoft.VisualBasic.Interaction.InputBox("Ingresa la incidencia", "Buscador", "word");

            final = editor.Text.LastIndexOf(buscador);

            while (inicio < final)
            {
                editor.Find(buscador, inicio, editor.TextLength, RichTextBoxFinds.MatchCase);
                editor.SelectionBackColor = Color.LightGreen;
                inicio = editor.Text.IndexOf(buscador, inicio) + 1;
            }

        }
    }
}

/**
 *  Jesús Castro (51v4n)
 *
 */

package tecmm.castro.jesus.mycalculator;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.View;
import android.view.MenuItem;
import android.widget.EditText;

public class MainActivityBinding extends AppCompatActivity {

    private EditText num1, num2, resultado;
    private MainActivityBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main_activity);
        num1 = (EditText) findViewById(R.id.editTextNumero1);
        num2 = (EditText) findViewById(R.id.editTextNumero2);
        resultado = (EditText) findViewById(R.id.editText3);
    }


    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.menu_game, menu);
        return true;
    }

    public void sumar(View view) {
        String valor1 = num1.getText().toString();
        String valor2 = num2.getText().toString();
        int nro1 = Integer.parseInt(valor1);
        int nro2 = Integer.parseInt(valor2);
        int suma = nro1 + nro2;
        String resu = String.valueOf(suma);
        resultado.setText(resu);
    }

    public boolean onOptionsItemSelected(MenuItem item) {
        int id = item.getItemId();
        if (id == R.id.action_settings) {
            return true;
        }
        return super.onOptionsItemSelected(item);
    }



}

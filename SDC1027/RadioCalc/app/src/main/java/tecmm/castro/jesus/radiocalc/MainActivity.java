package tecmm.castro.jesus.radiocalc;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.RadioButton;

public class MainActivity extends AppCompatActivity {

    private EditText num1, num2, resultado;
    private RadioButton rbSuma,rbResta, rbDivision, rbMultiplicacion;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        num1 = (EditText) findViewById(R.id.editTextNumero1);
        num2 = (EditText) findViewById(R.id.editTextNumero2);
        resultado = (EditText) findViewById(R.id.editText3);

        rbSuma = (RadioButton) findViewById(R.id.radioButtonSumar);
        rbResta = (RadioButton) findViewById(R.id.radioButtonResta);
        rbMultiplicacion = (RadioButton) findViewById(R.id.radioButtonMultiplicar);
        rbDivision = (RadioButton) findViewById(R.id.radioButtonDividir);
    }

    public void CALC(View view){
        String valor1 = num1.getText().toString();
        String valor2 = num2.getText().toString();
        int nro1 = Integer.parseInt(valor1);
        int nro2 = Integer.parseInt(valor2);
        double res = 0.0;

        if (rbSuma.isChecked() == true)
            res = nro1 + nro2;
        else if (rbResta.isChecked() == true)
            res = nro1 - nro2;
        else if (rbDivision.isChecked() == true)
            res = (double) nro1 / nro2;
        else if (rbMultiplicacion.isChecked() == true)
            res = nro1 * nro2;
        String resu = String.valueOf(res);
        resultado.setText(resu);
    }
}

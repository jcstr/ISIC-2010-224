package tecmm.castro.jesus.mycalculator;

import android.databinding.DataBindingUtil;
import android.app.Activity;
import android.os.Bundle;

import tecmm.castro.jesus.mycalculator.databinding.MainActivity;

public class MainActivity extends Activity {

    private MainActivity binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main_activity);
        binding = DataBindingUtil.setContentView(this, R.layout.main_activity);

    }
}

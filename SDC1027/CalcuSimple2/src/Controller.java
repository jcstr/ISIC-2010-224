import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

import javax.swing.JTextField;

public class Controller implements ActionListener, KeyListener
{
    private View view;
    public Controller(View view)
    {
        this.view = view;

        view.button_evalue.addActionListener(this);
        view.button_exit.addActionListener(this);

        view.input_number1.addKeyListener(this);
        view.input_number2.addKeyListener(this);
    }

    private double[] get()
    {
        double values[] = new double[2];
        values[0] = Double.parseDouble(view.input_number1.getText());
        values[1] = Double.parseDouble(view.input_number2.getText());
        return values;
    }

    private void set(double value)
    {
        view.input_result.setText(String.format("%.4f", value));
    }

    private void add()
    {
        set(get()[0] + get()[1]);
    }

    private void subtract()
    {
        set(get()[0] - get()[1]);
    }


    private void multiply()
    {
        set(get()[0] * get()[1]);
    }


    private void divide()
    {
        set(get()[0] / get()[1]);
    }

    @Override
    public void actionPerformed(ActionEvent event)
    {
        try
        {
            if(event.getSource() == view.button_evalue)
            {
                if(view.button_add.isSelected()) add();
                else if(view.button_subtract.isSelected()) subtract();
                else if(view.button_multiply.isSelected()) multiply();
                else if(view.button_divide.isSelected()) divide();
            }

            else if(event.getSource() == view.button_exit) System.exit(0);
        }

        catch(Exception e)
        {

        }
    }

    @Override
    public void keyTyped(KeyEvent event)
    {
        if(event.getKeyChar() == '.')
        {
            String text = ((JTextField)event.getSource()).getText();
            for (int i = 0; i < text.length(); i++)
                if(text.charAt(i) == '.') event.consume();
        }

        else if(!Character.isDigit(event.getKeyChar()) || event.getKeyChar() == ' ') event.consume();
    }

    @Override
    public void keyPressed(KeyEvent event)
    {

    }

    @Override
    public void keyReleased(KeyEvent event)
    {

    }
}
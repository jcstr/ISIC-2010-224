import java.awt.FlowLayout;
import java.awt.GridLayout;

import javax.swing.JFrame;
import javax.swing.JButton;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JOptionPane;
import javax.swing.border.TitledBorder;

public class View
{
    private JFrame index;

    private JPanel panel_container;
    private JPanel panel_inputs;
    private JPanel panel_buttons;

    public JTextField input_number1;
    public JTextField input_number2;
    public JTextField input_result;

    public JButton button_add;
    public JButton button_subtract;
    public JButton button_multiply;
    public JButton button_divide;

    public View()
    {
        JFrame index = new JFrame("Calculadora En Java");
        input_number1 = new JTextField("", 10);
        input_number2 = new JTextField("", 10);
        input_result = new JTextField("", 10);
        input_result.setEditable(false);

        panel_inputs = new JPanel(new FlowLayout());
        panel_inputs.setBorder(new TitledBorder("Numeros"));
        panel_inputs.add(new JLabel("Numero 1"));
        panel_inputs.add(input_number1);
        panel_inputs.add(new JLabel("Numero 2"));
        panel_inputs.add(input_number2);
        panel_inputs.add(new JLabel("Resultado"));
        panel_inputs.add(input_result);

        panel_buttons = new JPanel(new FlowLayout());
        button_add = new JButton("Sumar");
        button_subtract = new JButton("Restar");
        button_multiply = new JButton("Multiplicar");
        button_divide = new JButton("Dividir");

        panel_buttons.add(button_add);
        panel_buttons.add(button_subtract);
        panel_buttons.add(button_multiply);
        panel_buttons.add(button_divide);

        panel_container = new JPanel(new GridLayout(2, 1, 5, 5));
        panel_container.add(panel_inputs);
        panel_container.add(panel_buttons);

        index.add(panel_container);

        index.pack();
        index.setResizable(true);
        index.setVisible(true);
        index.setSize(256, 250);
        index.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
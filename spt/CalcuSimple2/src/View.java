import java.awt.FlowLayout;
import java.awt.GridLayout;

import javax.swing.JFrame;
import javax.swing.JButton;
import javax.swing.JRadioButton;
import javax.swing.ButtonGroup;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JOptionPane;
import javax.swing.border.TitledBorder;

public class View
{
    public JFrame index;

    private JPanel panel_container;
    private JPanel panel_inputs;
    private JPanel panel_buttons;
    private JPanel panel_submit;

    public JTextField input_number1;
    public JTextField input_number2;
    public JTextField input_result;

    private ButtonGroup group;

    public JButton button_evalue;
    public JButton button_exit;

    public JRadioButton button_add;
    public JRadioButton button_subtract;
    public JRadioButton button_multiply;
    public JRadioButton button_divide;

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

        panel_buttons = new JPanel(new GridLayout(4, 1));
        panel_buttons.setBorder(new TitledBorder("Operaciones"));
        button_add = new JRadioButton("Sumar");
        button_subtract = new JRadioButton("Restar");
        button_multiply = new JRadioButton("Multiplicar");
        button_divide = new JRadioButton("Dividir");
        group = new ButtonGroup();
        group.add(button_add);
        group.add(button_subtract);
        group.add(button_multiply);
        group.add(button_divide);
        panel_buttons.add(button_add);
        panel_buttons.add(button_subtract);
        panel_buttons.add(button_multiply);
        panel_buttons.add(button_divide);

        panel_submit = new JPanel(new FlowLayout());
        button_evalue = new JButton("Evaluar");
        button_exit = new JButton("Salir");
        panel_submit.add(button_evalue);
        panel_submit.add(button_exit);

        panel_container = new JPanel(new GridLayout(2, 2));
        panel_container.add(panel_inputs);
        panel_container.add(panel_buttons);
        panel_container.add(new JPanel());
        panel_container.add(panel_submit);

        index.add(panel_container);

        index.pack();
        index.setResizable(true);
        index.setVisible(true);
        index.setSize(450, 225);
        index.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
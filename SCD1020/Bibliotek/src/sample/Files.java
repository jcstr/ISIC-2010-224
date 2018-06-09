package sample;

import java.io.File;

import java.io.FileWriter;
import java.io.BufferedWriter;
import java.io.PrintWriter;

import java.io.FileReader;
import java.io.BufferedReader;

import java.io.IOException;

public class Files
{
    public File file;

    public Files(String name)
    {
        this.file = new File(name);
    }

    public void save(String text)
    {
        try
        {
            FileWriter fw = new FileWriter(this.file, true);
            BufferedWriter bw = new BufferedWriter(fw);
            PrintWriter wr = new PrintWriter(bw);

            wr.append(text + '\n');
            wr.close();
            bw.close();
            System.out.println("Guardado exitoso");
        }

        catch(IOException ioe){}
    }

    public String read()
    {
        String text = "";
        String aux="";

        try
        {
            FileReader fr;
            BufferedReader br;

            fr = new FileReader(this.file);
            br = new BufferedReader(fr);

            while(true)
            {
                aux = br.readLine();
                if(aux != null) text += aux + '\n';
                else break;
            }

            br.close();
            fr.close();
        }

        catch(IOException ioe){}

        return text;
    }

    public void override(String text)
    {
        try
        {
            FileWriter fw = new FileWriter(this.file, false);
            BufferedWriter bw = new BufferedWriter(fw);
            PrintWriter wr = new PrintWriter(bw);

            wr.append(text + "\n");
            wr.close();
            bw.close();
            System.out.println("Editado exitoso");
        }

        catch(IOException ioe){}
    }
}
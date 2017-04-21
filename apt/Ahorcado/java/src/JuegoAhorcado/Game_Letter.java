package JuegoAhorcado;

import about.About;
import java.awt.Color;
import java.awt.Desktop;
import java.awt.Image;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import javax.swing.ImageIcon;
import javax.swing.JOptionPane;

public class Game_Letter extends javax.swing.JFrame {
    
    Image icon;
    Ahorcado game = new Ahorcado();
 
     
    public Game_Letter() {
        initComponents();
        restaurar_color();        
        this.getContentPane().setBackground(Color.WHITE);
        this.repaint();
        this.setLocationRelativeTo(null);
        
    }
    
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel2 = new javax.swing.JPanel();
        button_A = new javax.swing.JButton();
        button_B = new javax.swing.JButton();
        button_C = new javax.swing.JButton();
        button_D = new javax.swing.JButton();
        button_E = new javax.swing.JButton();
        button_F = new javax.swing.JButton();
        button_G = new javax.swing.JButton();
        button_H = new javax.swing.JButton();
        button_I = new javax.swing.JButton();
        button_J = new javax.swing.JButton();
        button_K = new javax.swing.JButton();
        button_L = new javax.swing.JButton();
        button_M = new javax.swing.JButton();
        button_N = new javax.swing.JButton();
        button_Ñ = new javax.swing.JButton();
        button_O = new javax.swing.JButton();
        button_P = new javax.swing.JButton();
        button_Q = new javax.swing.JButton();
        button_R = new javax.swing.JButton();
        button_S = new javax.swing.JButton();
        button_T = new javax.swing.JButton();
        button_U = new javax.swing.JButton();
        button_V = new javax.swing.JButton();
        button_X = new javax.swing.JButton();
        button_Y = new javax.swing.JButton();
        button_Z = new javax.swing.JButton();
        button_W = new javax.swing.JButton();
        jPanel4 = new javax.swing.JPanel();
        Error_Icon = new javax.swing.JLabel();
        Palabra_oculta = new javax.swing.JTextField();
        jPanel3 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        imagen_Ahorcado = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jMenuBar1 = new javax.swing.JMenuBar();
        jMenu1 = new javax.swing.JMenu();
        jMenuItem1 = new javax.swing.JMenuItem();
        jMenuItem2 = new javax.swing.JMenuItem();
        jMenu2 = new javax.swing.JMenu();
        jMenuItem3 = new javax.swing.JMenuItem();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Juegos de Ahorcado");
        setBackground(new java.awt.Color(255, 255, 255));
        setResizable(false);
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel2.setBackground(new java.awt.Color(51, 51, 51));
        jPanel2.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.RAISED));
        jPanel2.setForeground(new java.awt.Color(51, 51, 51));
        jPanel2.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        button_A.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_A.setText("A");
        button_A.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_AActionPerformed(evt);
            }
        });
        jPanel2.add(button_A, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 20, 61, 34));

        button_B.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_B.setText("B");
        button_B.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_BActionPerformed(evt);
            }
        });
        jPanel2.add(button_B, new org.netbeans.lib.awtextra.AbsoluteConstraints(90, 20, 61, 34));

        button_C.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_C.setText("C");
        button_C.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_CActionPerformed(evt);
            }
        });
        jPanel2.add(button_C, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 20, 61, 34));

        button_D.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_D.setText("D");
        button_D.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_DActionPerformed(evt);
            }
        });
        jPanel2.add(button_D, new org.netbeans.lib.awtextra.AbsoluteConstraints(230, 20, 61, 34));

        button_E.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_E.setText("E");
        button_E.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_EActionPerformed(evt);
            }
        });
        jPanel2.add(button_E, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 20, 61, 34));

        button_F.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_F.setText("F");
        button_F.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_FActionPerformed(evt);
            }
        });
        jPanel2.add(button_F, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 60, 61, 34));

        button_G.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_G.setText("G");
        button_G.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_GActionPerformed(evt);
            }
        });
        jPanel2.add(button_G, new org.netbeans.lib.awtextra.AbsoluteConstraints(90, 60, 61, 34));

        button_H.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_H.setText("H");
        button_H.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_HActionPerformed(evt);
            }
        });
        jPanel2.add(button_H, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 60, 61, 34));

        button_I.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_I.setText("I");
        button_I.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_IActionPerformed(evt);
            }
        });
        jPanel2.add(button_I, new org.netbeans.lib.awtextra.AbsoluteConstraints(230, 60, 61, 34));

        button_J.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_J.setText("J");
        button_J.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_JActionPerformed(evt);
            }
        });
        jPanel2.add(button_J, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 60, 61, 34));

        button_K.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_K.setText("K");
        button_K.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_KActionPerformed(evt);
            }
        });
        jPanel2.add(button_K, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 100, 61, 34));

        button_L.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_L.setText("L");
        button_L.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_LActionPerformed(evt);
            }
        });
        jPanel2.add(button_L, new org.netbeans.lib.awtextra.AbsoluteConstraints(90, 100, 61, 34));

        button_M.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_M.setText("M");
        button_M.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_MActionPerformed(evt);
            }
        });
        jPanel2.add(button_M, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 100, 61, 34));

        button_N.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_N.setText("N");
        button_N.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_NActionPerformed(evt);
            }
        });
        jPanel2.add(button_N, new org.netbeans.lib.awtextra.AbsoluteConstraints(230, 100, 61, 34));

        button_Ñ.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_Ñ.setText("Ñ");
        button_Ñ.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_ÑActionPerformed(evt);
            }
        });
        jPanel2.add(button_Ñ, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 100, 61, 34));

        button_O.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_O.setText("O");
        button_O.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_OActionPerformed(evt);
            }
        });
        jPanel2.add(button_O, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 140, 61, 34));

        button_P.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_P.setText("P");
        button_P.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_PActionPerformed(evt);
            }
        });
        jPanel2.add(button_P, new org.netbeans.lib.awtextra.AbsoluteConstraints(90, 140, 61, 34));

        button_Q.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_Q.setText("Q");
        button_Q.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_QActionPerformed(evt);
            }
        });
        jPanel2.add(button_Q, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 140, 61, 34));

        button_R.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_R.setText("R");
        button_R.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_RActionPerformed(evt);
            }
        });
        jPanel2.add(button_R, new org.netbeans.lib.awtextra.AbsoluteConstraints(230, 140, 61, 34));

        button_S.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_S.setText("S");
        button_S.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_SActionPerformed(evt);
            }
        });
        jPanel2.add(button_S, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 140, 61, 34));

        button_T.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_T.setText("T");
        button_T.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_TActionPerformed(evt);
            }
        });
        jPanel2.add(button_T, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 180, 61, 34));

        button_U.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_U.setText("U");
        button_U.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_UActionPerformed(evt);
            }
        });
        jPanel2.add(button_U, new org.netbeans.lib.awtextra.AbsoluteConstraints(90, 180, 61, 34));

        button_V.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_V.setText("V");
        button_V.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_VActionPerformed(evt);
            }
        });
        jPanel2.add(button_V, new org.netbeans.lib.awtextra.AbsoluteConstraints(160, 180, 61, 34));

        button_X.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_X.setText("X");
        button_X.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_XActionPerformed(evt);
            }
        });
        jPanel2.add(button_X, new org.netbeans.lib.awtextra.AbsoluteConstraints(230, 180, 61, 34));

        button_Y.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_Y.setText("Y");
        button_Y.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_YActionPerformed(evt);
            }
        });
        jPanel2.add(button_Y, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 180, 61, 34));

        button_Z.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_Z.setText("Z");
        button_Z.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_ZActionPerformed(evt);
            }
        });
        jPanel2.add(button_Z, new org.netbeans.lib.awtextra.AbsoluteConstraints(20, 220, 61, 34));

        button_W.setFont(new java.awt.Font("Tahoma", 0, 18)); // NOI18N
        button_W.setText("W");
        button_W.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button_WActionPerformed(evt);
            }
        });
        jPanel2.add(button_W, new org.netbeans.lib.awtextra.AbsoluteConstraints(90, 220, 61, 34));

        getContentPane().add(jPanel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(21, 208, 385, 278));
        jPanel2.getAccessibleContext().setAccessibleName("Teclado   ");

        jPanel4.setBackground(new java.awt.Color(255, 255, 255));
        jPanel4.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));

        Error_Icon.setIcon(new javax.swing.ImageIcon(getClass().getResource("/icon/loser/loser8.jpg"))); // NOI18N

        Palabra_oculta.setEditable(false);
        Palabra_oculta.setBackground(new java.awt.Color(51, 51, 51));
        Palabra_oculta.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        Palabra_oculta.setForeground(new java.awt.Color(255, 255, 255));
        Palabra_oculta.setHorizontalAlignment(javax.swing.JTextField.CENTER);
        Palabra_oculta.setText("-------------------");
        Palabra_oculta.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));

        javax.swing.GroupLayout jPanel4Layout = new javax.swing.GroupLayout(jPanel4);
        jPanel4.setLayout(jPanel4Layout);
        jPanel4Layout.setHorizontalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel4Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Palabra_oculta, javax.swing.GroupLayout.DEFAULT_SIZE, 291, Short.MAX_VALUE)
                    .addComponent(Error_Icon, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap())
        );
        jPanel4Layout.setVerticalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel4Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(Error_Icon)
                .addGap(13, 13, 13)
                .addComponent(Palabra_oculta, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(16, Short.MAX_VALUE))
        );

        getContentPane().add(jPanel4, new org.netbeans.lib.awtextra.AbsoluteConstraints(60, 90, -1, -1));

        jPanel3.setBackground(new java.awt.Color(51, 51, 51));
        jPanel3.setForeground(new java.awt.Color(51, 51, 51));

        jLabel1.setFont(new java.awt.Font("Swis721 WGL4 BT", 1, 36)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(255, 204, 0));
        jLabel1.setText("Ahorcado");

        javax.swing.GroupLayout jPanel3Layout = new javax.swing.GroupLayout(jPanel3);
        jPanel3.setLayout(jPanel3Layout);
        jPanel3Layout.setHorizontalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3Layout.createSequentialGroup()
                .addGap(96, 96, 96)
                .addComponent(jLabel1)
                .addContainerGap(115, Short.MAX_VALUE))
        );
        jPanel3Layout.setVerticalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel3Layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jLabel1)
                .addContainerGap())
        );

        getContentPane().add(jPanel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(31, 11, -1, -1));

        imagen_Ahorcado.setIcon(new javax.swing.ImageIcon(getClass().getResource("/ahorcado/0.jpg"))); // NOI18N
        getContentPane().add(imagen_Ahorcado, new org.netbeans.lib.awtextra.AbsoluteConstraints(424, 11, -1, -1));

        jLabel2.setText("Design by Artyom");
        getContentPane().add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(800, 500, -1, -1));

        jMenu1.setText("File");

        jMenuItem1.setText("Iniciar / Jugar Nuevo ");
        jMenuItem1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuItem1ActionPerformed(evt);
            }
        });
        jMenu1.add(jMenuItem1);

        jMenuItem2.setText("Salir");
        jMenuItem2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuItem2ActionPerformed(evt);
            }
        });
        jMenu1.add(jMenuItem2);

        jMenuBar1.add(jMenu1);

        jMenu2.setText("Help");

        jMenuItem3.setText("Arceca de ...");
        jMenuItem3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuItem3ActionPerformed(evt);
            }
        });
        jMenu2.add(jMenuItem3);

        jMenuBar1.add(jMenu2);

        setJMenuBar(jMenuBar1);

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void restaurar_color(){
        
         button_A.setEnabled(true);
         button_B.setEnabled(true);
         button_D.setEnabled(true);
         button_C.setEnabled(true);
         button_E.setEnabled(true);
         button_F.setEnabled(true);
         button_G.setEnabled(true);
         button_H.setEnabled(true);
         button_I.setEnabled(true);
         button_J.setEnabled(true);
         button_K.setEnabled(true);
         button_L.setEnabled(true);
         button_M.setEnabled(true);
         button_N.setEnabled(true);
         button_Ñ.setEnabled(true);
         button_O.setEnabled(true);
         button_P.setEnabled(true);
         button_Q.setEnabled(true);
         button_R.setEnabled(true);
         button_S.setEnabled(true);
         button_T.setEnabled(true);
         button_U.setEnabled(true);
         button_V.setEnabled(true);
         button_W.setEnabled(true);
         button_X.setEnabled(true);
         button_Y.setEnabled(true);
         button_Z.setEnabled(true);
    }
    
    private void button_AActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_AActionPerformed
          game.evaluar('A'); 
          button_A.setEnabled(false);
    }//GEN-LAST:event_button_AActionPerformed

    private void button_BActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_BActionPerformed
        game.evaluar('B');
        button_B.setEnabled(false);
    }//GEN-LAST:event_button_BActionPerformed

    private void button_CActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_CActionPerformed
                game.evaluar('C');
                button_C.setEnabled(false);
    }//GEN-LAST:event_button_CActionPerformed

    private void button_DActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_DActionPerformed
        game.evaluar('D');
        button_D.setEnabled(false);
    }//GEN-LAST:event_button_DActionPerformed

    private void button_EActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_EActionPerformed
        game.evaluar('E');
    
        button_E.setEnabled(false);
    }//GEN-LAST:event_button_EActionPerformed

    private void button_FActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_FActionPerformed
        game.evaluar('F');        
    
        button_F.setEnabled(false);
    }//GEN-LAST:event_button_FActionPerformed

    private void button_GActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_GActionPerformed
                game.evaluar('G');       
                button_G.setEnabled(false);
    }//GEN-LAST:event_button_GActionPerformed

    private void button_HActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_HActionPerformed
                game.evaluar('H');
   
                button_H.setEnabled(false);
    }//GEN-LAST:event_button_HActionPerformed

    private void button_IActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_IActionPerformed
        game.evaluar('I');
    
        button_I.setEnabled(false);
    }//GEN-LAST:event_button_IActionPerformed

    private void button_JActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_JActionPerformed
                game.evaluar('J');

                button_J.setEnabled(false);
    }//GEN-LAST:event_button_JActionPerformed

    private void button_KActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_KActionPerformed
        game.evaluar('K');
        button_K.setEnabled(false);
    }//GEN-LAST:event_button_KActionPerformed

    private void button_LActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_LActionPerformed
                game.evaluar('L');
           
                button_L.setEnabled(false);
    }//GEN-LAST:event_button_LActionPerformed

    private void button_MActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_MActionPerformed
                game.evaluar('M');
                button_M.setEnabled(false);
    }//GEN-LAST:event_button_MActionPerformed

    private void button_NActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_NActionPerformed
        game.evaluar('N');
        button_N.setEnabled(false);
        
    }//GEN-LAST:event_button_NActionPerformed

    private void button_ÑActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_ÑActionPerformed
        game.evaluar('Ñ');
        button_Ñ.setEnabled(false);
    }//GEN-LAST:event_button_ÑActionPerformed

    private void button_OActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_OActionPerformed
        game.evaluar('O');
        button_O.setEnabled(false);
    }//GEN-LAST:event_button_OActionPerformed

    private void button_PActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_PActionPerformed
        game.evaluar('P');
        button_P.setEnabled(false);
    }//GEN-LAST:event_button_PActionPerformed

    private void button_QActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_QActionPerformed
        game.evaluar('Q');
        button_Q.setEnabled(false);
    }//GEN-LAST:event_button_QActionPerformed

    private void button_RActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_RActionPerformed
        game.evaluar('R');
        button_R.setEnabled(false);
    }//GEN-LAST:event_button_RActionPerformed

    private void button_SActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_SActionPerformed
                game.evaluar('S');
                button_S.setEnabled(false);
    }//GEN-LAST:event_button_SActionPerformed

    private void button_TActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_TActionPerformed
        game.evaluar('T'); 
        button_T.setEnabled(false);
    }//GEN-LAST:event_button_TActionPerformed

    private void button_UActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_UActionPerformed
        game.evaluar('U');
                button_U.setEnabled(false);
    }//GEN-LAST:event_button_UActionPerformed

    private void button_VActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_VActionPerformed
        game.evaluar('V');
        button_V.setEnabled(false);
    }//GEN-LAST:event_button_VActionPerformed

    private void button_WActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_WActionPerformed
        game.evaluar('W');
        button_W.setEnabled(false);
    }//GEN-LAST:event_button_WActionPerformed

    private void button_XActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_XActionPerformed
        game.evaluar('X');
                button_X.setEnabled(false);
    }//GEN-LAST:event_button_XActionPerformed

    private void button_YActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_YActionPerformed
        game.evaluar('Y');
                ;button_Y.setEnabled(false);
    }//GEN-LAST:event_button_YActionPerformed

    private void button_ZActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button_ZActionPerformed
        game.evaluar('Z');
        button_Z.setEnabled(false);
    }//GEN-LAST:event_button_ZActionPerformed

    private void jMenuItem1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jMenuItem1ActionPerformed
        game = new Ahorcado(Palabra_oculta,Error_Icon,imagen_Ahorcado);         
        restaurar_color();
    }//GEN-LAST:event_jMenuItem1ActionPerformed

    private void jMenuItem2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jMenuItem2ActionPerformed
        // TODO add your handling code here:
        System.exit(0);
    }//GEN-LAST:event_jMenuItem2ActionPerformed

    private void jMenuItem3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jMenuItem3ActionPerformed
        // TODO add your handling code here:     
        About.main(null);
    }//GEN-LAST:event_jMenuItem3ActionPerformed
    
    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Game_Letter().setVisible(true);
            }
        });
    }
    
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel Error_Icon;
    private javax.swing.JTextField Palabra_oculta;
    private javax.swing.JButton button_A;
    private javax.swing.JButton button_B;
    private javax.swing.JButton button_C;
    private javax.swing.JButton button_D;
    private javax.swing.JButton button_E;
    private javax.swing.JButton button_F;
    private javax.swing.JButton button_G;
    private javax.swing.JButton button_H;
    private javax.swing.JButton button_I;
    private javax.swing.JButton button_J;
    private javax.swing.JButton button_K;
    private javax.swing.JButton button_L;
    private javax.swing.JButton button_M;
    private javax.swing.JButton button_N;
    private javax.swing.JButton button_O;
    private javax.swing.JButton button_P;
    private javax.swing.JButton button_Q;
    private javax.swing.JButton button_R;
    private javax.swing.JButton button_S;
    private javax.swing.JButton button_T;
    private javax.swing.JButton button_U;
    private javax.swing.JButton button_V;
    private javax.swing.JButton button_W;
    private javax.swing.JButton button_X;
    private javax.swing.JButton button_Y;
    private javax.swing.JButton button_Z;
    private javax.swing.JButton button_Ñ;
    private javax.swing.JLabel imagen_Ahorcado;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JMenu jMenu1;
    private javax.swing.JMenu jMenu2;
    private javax.swing.JMenuBar jMenuBar1;
    private javax.swing.JMenuItem jMenuItem1;
    private javax.swing.JMenuItem jMenuItem2;
    private javax.swing.JMenuItem jMenuItem3;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JPanel jPanel3;
    private javax.swing.JPanel jPanel4;
    // End of variables declaration//GEN-END:variables
    
}

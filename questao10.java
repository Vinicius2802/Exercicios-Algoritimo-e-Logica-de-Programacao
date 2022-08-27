import javax.swing.JOptionPane;

public class questao10 {
    public static void main(String[] args) {

        double v[];

        int t = Integer.parseInt(JOptionPane.showInputDialog(null,"Digite o tamanho do array: "));

         v = new double[t];
         for(int i=0;i<v.length;i++){
            v[i] = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite o valor da posição: " +i));
        }
        
        for(int i=0;i<v.length;i++){
            JOptionPane.showMessageDialog(null,"O valor da posição "+i+" é: "+v[i]);
        }
    }    
}
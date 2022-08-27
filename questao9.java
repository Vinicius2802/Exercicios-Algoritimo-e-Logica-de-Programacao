import javax.swing.JOptionPane;

public class questao9 {
    public static void main(String[] args){


         float vet[] = new float[5];
         float media;
         float soma = 0;


         for(int i = 0; i < 5; i++){
             vet[i] = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite a nota da posição " +i +":"));
         }
         for(int i = 0; i < 5; i++){
             JOptionPane.showMessageDialog(null, "As notas são: " +vet[i]);
         }

         for(int i = 0; i < 5; i++){
            soma += vet[i];
         }

         media = soma / 5;

         JOptionPane.showMessageDialog(null, "A média das notas é: " +media);
         
    }   
}
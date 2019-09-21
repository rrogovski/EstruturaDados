
package listas;

import Lista.Aluno;
import Lista.Lista;
import Lista.ListaAluno;

public class Listas {
    
    public static void main(String[] args) {
        //Lista l = new Lista();
        //l.addFirst(10);
        //l.addLast(20);
        //l.addFirst(30);
        //l.addLast(50);
        //l.addLastValue(20, 45);
        //l.addLastValue(10, 15);
        //l.addLastValue(18, 90);
        //l.removeInfo(20);
        //l.showList();
        
        //l.addValueByOrder(9, true);
        //l.showList();
        
        ListaAluno listaAluno = new ListaAluno();
        listaAluno.addFirst(new Aluno("Fulano", 1, "BSI"));
        listaAluno.addFirst(new Aluno("Beltrano", 2, "BSI"));
        listaAluno.addFirst(new Aluno("Cipriano", 3, "BSI"));
        listaAluno.addFirst(new Aluno("Elesbão", 4, "BSI"));
        listaAluno.addFirst(new Aluno("Goku", 5, "BSI"));
        listaAluno.addFirst(new Aluno("Seiya", 6, "BSI"));
        listaAluno.addFirst(new Aluno("Yusuke", 7, "BSI"));
        listaAluno.addFirst(new Aluno("Midoria", 8, "BSI"));
        listaAluno.addFirst(new Aluno("Saitama", 9, "BSI"));
        listaAluno.addFirst(new Aluno("Ichigo", 10, "BSI"));
        listaAluno.addFirst(new Aluno("Sensui", 11, "BSI"));
        
        
        listaAluno.removeFirst();
        listaAluno.addLastValue(11, new Aluno("Shiryu", 12, "BSI"));        
        
        listaAluno.showList();
    }    
}

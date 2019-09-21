/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Lista;

/**
 *
 * @author rfrog
 */
public class ListaAluno {
    
    public NoAluno lista;
       
    public boolean vazia(){
        return lista==null;
    }
    
    public void addFirst(Aluno info){
        NoAluno n = new NoAluno();
        n.info = info;
        n.proximo = lista;
        this.lista = n;
    }
    
    public void showList(){
        NoAluno aux = lista;
        if(this.vazia())
            System.out.println("\nLista Vazia");
        else {
            System.out.println("\n\nCabeça");
            while(aux!=null){
                aux.showNo();
                aux = aux.proximo;
            }
            System.out.println("\nCauda");
        }
    }
    
    public void removeFirst(){
        if(!this.vazia()){
            System.out.println("Removendo...");
            lista.showNo();
            lista = lista.proximo;
        }
    }
    
    public void addLast(Aluno info){
        if(this.vazia())
            addFirst(info);
        else {
            NoAluno n = new NoAluno();
            n.info = info;
            NoAluno aux = lista;
            while (aux.proximo!=null)
                aux = aux.proximo;
            aux.proximo = n;
        }
    }
    
    public void removeLast(){
        if(!this.vazia()){
            NoAluno anterior = this.lista;
            NoAluno aux = this.lista;
            while (aux.proximo != null){
                anterior = aux;
                aux = aux.proximo;
            }
            System.out.println("Removendo...");
            aux.showNo();
            anterior.proximo = null;
            if (aux == lista)
                lista = null;
        }
    }
    
    public void addLastValue(int value, Aluno info){
        if(lista == null)
            addFirst(info);
        else{
            NoAluno aux = this.lista;
            {
                while(aux.proximo != null && aux.info.getMatricula() != value)
                    aux = aux.proximo;
                if(aux.info.getMatricula() == value)
                {
                    NoAluno n = new NoAluno();
                    n.info = info;
                    n.proximo = aux.proximo;
                    aux.proximo = n;
                } else {
                    addLast(info);
                }
            }
        }
    }
}

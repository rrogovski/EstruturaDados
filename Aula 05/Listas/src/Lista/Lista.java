
package Lista;

public class Lista {
    public No lista;
       
    public boolean vazia(){
        return lista==null;
    }
    
    public void addFirst(int info){
        No n = new No();
        n.info = info;
        n.proximo = lista;
        this.lista = n;
    }
    
    public void showList(){
        No aux = lista;
        if(this.vazia())
            System.out.println("Lista Vazia");
        else {
            System.out.println("Cabeça");
            while(aux!=null){
                aux.showNo();
                aux = aux.proximo;
            }
            System.out.println("Cauda");
        }
    }
    
    public void removeFirst(){
        if(!this.vazia()){
            System.out.println("Removendo...");
            lista.showNo();
            lista = lista.proximo;
        }
    }
    
    public void addLast(int info){
        if(this.vazia())
            addFirst(info);
        else {
            No n = new No();
            n.info = info;
            No aux = lista;
            while (aux.proximo!=null)
                aux = aux.proximo;
            aux.proximo = n;
        }
    }
    
    public void removeLast(){
        if(!this.vazia()){
            No anterior = this.lista;
            No aux = this.lista;
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
    
    public void addLastValue(int value, int info){
        if(lista == null)
            addFirst(info);
        else{
            No aux = this.lista;
            {
                while(aux.proximo != null && aux.info!=value)
                    aux = aux.proximo;
                if(aux.info == value)
                {
                    No n = new No();
                    n.info = info;
                    n.proximo = aux.proximo;
                    aux.proximo = n;
                } else {
                    addLast(info);
                }
            }
        }
    }
    
    public void addValueByOrder(int info, boolean asc){
        No aux = this.lista;
        
        if(lista == null || aux.info == info)
            addFirst(info);
        else{
            if(asc){
                while(aux.proximo != null && aux.info > info)
                    aux = aux.proximo;
                
                No n = new No();
                n.info = info;
                n.proximo = aux.proximo;
                aux.proximo = n;
            } else {
                while(aux.proximo != null && aux.info < info)
                    aux = aux.proximo;
                
                No n = new No();
                n.info = info;
                n.proximo = aux.proximo;
                aux.proximo = n;
            }
            
//            if(aux.info != info) {
//                No n = new No();
//                n.info = info;
//                n.proximo = aux.proximo;
//                aux.proximo = n;
//            } else {
//                addLast(info);
//            }
        }
    }
    
    public void removeInfo(int info){
        if(!this.vazia()){
            No aux = lista;
            No anterior = lista;
            while(aux.proximo!=null && aux.info!=info){
                anterior = aux;
                aux = aux.proximo;
            }
            if(aux.info == info){
                System.out.println("Removendo...");
                aux.showNo();
                if(aux == lista) //1o elemento
                    lista=aux.proximo;
                else // outros elementos
                    anterior.proximo = aux.proximo;
            } else 
                System.out.println(info+" não existe na lista");
        }
    }
            
}

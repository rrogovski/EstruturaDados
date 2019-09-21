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
public class NoAluno {
    public Aluno info;
    public NoAluno proximo;
    
    public void showNo(){
        System.out.println("Dados do aluno: " +
                "Matrícula: " + info.getMatricula() +
                " | Nome: " + info.getNome() +
                " | Curso: " + info.getCurso() +
                " | Próximo-> " + proximo);
    }
}

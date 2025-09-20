package com.studyopedia;

import java.util.Scanner;
public class MuktasNewProject {

    public static void main(String[] args) {

     Scanner input= new Scanner (System.in);

       int n,c=0,m;
        System.out.println("Enter :");
       n= input.nextInt();

        System.out.println("Enter m :");
       m= input.nextInt();


       for (int i=n ; i<=m; i++){
           c=0;
           for (int j=1 ; j<=i; ++j){

                if(i%j==0){

                    c++;

                }

       }
             if (c==2){
           System.out.println("prime numbers are= "+i);

           }



    }



    }
}

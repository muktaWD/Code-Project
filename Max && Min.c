package com.studyopedia;

import java.util.Scanner;

public class MuktasNewProject {

    public static void main(String[] args) {

    Scanner input = new Scanner (System.in);

    double [] num = new double  [5];



     System.out.println("enter :");

     num[0]= input.nextDouble();

     double min =num[0];

     double max =num[0];


     for ( int i=1 ; i<5; ++i)
             {
                 num [i]= input.nextDouble();

                 if(min>num[i]){

                     min= num[i];


             }
                 if(max<num[i]){

                     max= num[i];


             }



     }
        System.out.println(min);
        System.out.println(max);

    }
}

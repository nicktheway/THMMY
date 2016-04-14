/**
 * A2-8551.c
 * Προγραμματιστικές τεχνικές, 2η εργασία
 * Συναρτήσεις πράξεων μιγαδικών και πραγματικών αριθμών. 
 * Νικόλαος Κατωμέρης, 8551
 * 18/10/2015
 */
 #include "operations.h"
 
float add(float num1, float num2)
{
    return num1+num2;
}
complex add(float re1, float re2, float im1, float im2)
{
    complex z;
    z.re = re1 + re2;
    z.im = im1 + im2;
    return z;
}
float sub(float num1, float num2)
{
    return num1-num2;
}
complex sub(float re1, float re2, float im1, float im2)
{
    complex z;
    z.re = re1 - re2;
    z.im = im1 - im2;
    return z;
}
float mult(float num1, float num2)
{
    return num1*num2;
}
complex mult(float re1, float re2, float im1, float im2)
{
    complex z;
    z.re = re1*re2 - im1*im2;
    z.im = re1*im2 + im1*re2;
    return z;
}
float divid(float num1, float num2)
{
    return num1/num2;
}
complex divid(float re1, float re2, float im1, float im2)
{
    complex z;
    z.re = (re1*re2 + im1*im2) / (re2*re2 + im2*im2);
    z.im = (-re1*im2 + im1*re2) / (re2*re2 + im2*im2);
    return z;
}

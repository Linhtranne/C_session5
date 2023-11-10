#include<stdio.h>
#include<math.h>>
int main(){
	float a, b, c, x;
printf("Nhap vao 3 so a, b, c: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("Phuong trinh co vo so nghiem!");
                else
                    printf("Phuong trinh vo nghiem!");
            }
        else
            printf("Phuong trinh co nghiem duy nhat la: %f",-c/b);
    }
    else
    {
        x=b*b-4*a*c;
        if (x<0)
            printf("Phuong trinh vo nghiem!!!");
        else if (x==0)
            printf("Phuong trinh co nghiem kep la: %f",-b/(2*a));
        else
            printf("Phuong trinh co 2 nghiem phan biet la: %f,%f",(-b+sqrt(x))/(2*a),(-b-sqrt(x))/(2*a));    
    }    
  
}
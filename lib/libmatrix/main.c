#include "libmatrix.h"
#include "ft_matrix_add_double.c" //matrisle bir sayı toplar
#include "ft_dimensions_equal.c" //iki matrisin boyutlarını kontrol eder
#include "ft_matrix_free.c" // matrisi boşaltır
#include "ft_matrix_id.c" //keşegeni 1 olan matris verir 
#include "ft_matrix_mul_double.c" // matrisi double la çarpar
#include "ft_matrix_mul.c" // matrisleri çarpar
#include "ft_matrix_new.c" // yeni matris verir içini 0la doldurur
#include "ft_matrix_set_all.c" // matrisi verilen sayıya set eder
#include "ft_matrix_set_vals.c" // matrisi verilen arrayle set eder
#include "ft_matrix_sub_double.c" // matrisin tüm elemanlarında verilen sayıyı
#include "ft_matrix_sub.c" // matristen matris çıkartır
#include "ft_puterror.c" // putstr ile 2. kanaldan hata mesajı bastırır
#include "ft_putint_fd.c" // integer bastırır 
#include "ft_putint.c" // integer bastırır
#include "ft_putmatrix.c" // matrix bastırır printf kullanır
#include "ft_putstr_fd.c" // string bastırır libft kullanır.
#include "ft_scale_matrix.c" // scale matrisi elindeki matrisi çarpar normal çarpmayla aynı.
#include "ft_matrix_scale.c" // verilen vectorle matrisin köşegenini set eder

#include "ft_vector4_new.c" // 4 boyunda bir vector verir sonuncuyu 1 e setler
#include "ft_putvector.c" // vectorü ekrana yazdırır.
#include "ft_vector_add.c" // vektörleri toplar
#include "ft_vector_sub.c" // vectorleri çıkartır
#include "ft_vector_new.c" // yeni vector verir
#include "ft_vector_mag.c" // vectörün boyunu hesaplar
#include "ft_vector_normalize.c" // vectörün boyunu 1 yapar yönünü değiştirmez
#include "ft_vector_set_all.c" // vectorun verilen sayıya set eder
#include "ft_vector_set_vals.c" //vektörü verile diziyle set eder

#include "ft_matrix_mul_vector.c"

#include "ft_vector_scale.c"

#include "ft_vector_cross.c"
#include "ft_vector_dot.c"
#include "ft_vector_dup.c"
#include "ft_vector_forward.c"
#include "ft_vector_free.c"




#include "ft_vector_to_matrix.c"


int main()
{
    // t_vector *vec = ft_vector4_new(3,4,5);
    // t_vector *vec2 = ft_vector4_new(312312,312312312,3213123);
    // t_vector *vec3 = ft_vector_new(2);
    // double a[] = {31,32,33,34};
    // ft_vector_set_vals(vec2,a,4);
    // ft_putvector(vec);
    // ft_putvector(vec2);
    // printf("*******************************************");
    // ft_vector_normalize(vec,vec2);
    // ft_putvector(vec);
    // ft_putvector(vec2);


    


    
    t_matrix *mat = ft_matrix_new(4,4);
    t_matrix *scale = ft_matrix_new(4,4);
    t_matrix *res = ft_matrix_new(4,4);
    t_vector *vec = ft_vector_new(4);
    ft_vector_set_all(vec,31);
    res->m[0][0] = 12;

    ft_scale_matrix(4,4,vec,res);
    ft_putmatrix(res);



 


}
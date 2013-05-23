//areas.cpp
//
//++++++++++++++++++++++++++++++++++++++++++++++++++llamada por valor
float Area_circulo(float radio)
{
    const float PI = 3.14;
    float area;
    area = PI * radio * radio;
    return area;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++llamada por valor
float Area_rectangulo(float lado1, float lado2)
{
    return lado1 * lado2;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++llamada por valor y referencia
void Area_triangulo (float base, float altura, float &area)
{
    area = (base * altura)/2;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++

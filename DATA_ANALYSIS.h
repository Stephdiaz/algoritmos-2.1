#pragma once
class DATA_ANALYSIS
{
private:
	
public:
	DATA_ANALYSIS(void); 
	tipo Promedio_columna (tipo, tipo, tipo, ...);
	tipo Variacion_tiempo (string tiempo1, string tiempo2);	//dijistes que tiempo es fijo. cualquier variacion Velocidad aceleracion distancia, todo con relacion al tiempo
	tipo Graficar_promedios (tipo, tipo, tipo, tipo);	// nose si esto es posuible en formulario ya que no es una estadistica en si, si no es como una grafica que sube y baja de acuerdo al valor
	tipo Graficas_comparativas (tipo Value1, tipo Value 2);	// grafica entre dos movimientos
	string Descrpcion (string codigo);	//esto de que cada mov tenga un codigo y en caso se proporcione ese codigo, se de una descrpcion teorica del mov
	void Mostrar_datos_manuales (tipo, tipo, tipo,...);	//si mal no entendi, ellos mismos pueden meter sus datos, que estos se muestren y con eso se llama a la funcion de grafica
	void Mostrar_velocidadmax (tipo a [][], int cantidad);
};
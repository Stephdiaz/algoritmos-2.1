#pragma once
template <class tipo>		//todo lo hice de clase tipo, porque no se que valores en si recibe
class DATA_ANALYSIS
{
private:
	tipo _distancia;
	tipo _velocidad:
	tipo _peso;
	tipo _fuerza;
	tipo _aceleracion;
	
public:
	DATA_ANALYSIS(void); //solo se trabajara en dos sistemas
	void DATA_ANALYSIS(tipo, tipo, tipo, tipo, ...);
	tipo Conversion_MKS (tipo distancia, tipo peso, tipo velocidad, tipo fuerza);	//no me acuerdo la libreria
	tipo Conversion_CGS (tipo distancia, tipo peso, tipo fuerza,...);	//no me acuerdo la libreria

	tipo Grafica_estadistica (tipo value1, tipo value2);			// pense en que la estadistica sea comparativa de dos movimientos y solo sea de un valor tiempo-tiempo distancia-distancia fuerza-fuerza

	tipo Descripcion_mov (string codigo);							// Si se reconoce un movimiento, es decir nosotros hacemos que sea por ejemplo caida libre, que cada movimiento tenga un codigo, y se le muestre una pequeña descripcion de ese movimiento
	string Mostrar_Valores_cte ();			// los valores constante que se utilice, aun que creo solo es gravedad, pero mostrar su valor
	
};
template <class tipo>	
	DATA_ANALYSIS <tipo>::DATA_ANALYSIS()
	{
		_distancia = 0;
		_velocidad = 0;
		_peso = 0;
		_fuerza = 0;
		_aceleracion = 0;
	}

template <class tipo>
	void DATA_ANALYSIS(tipo d, tipo v, tipo p, tipo f, tipo a)
	{
		_distancia = d;
		_velocidad = v;
		_peso = p;
		_fuerza = f;
		_aceleracion = a;
	}

template <class tipo>	
tipo DATA_ANALYSIS <tipo>:: Conversion_MKS(tipo distancia, tipo peso, tipo velocidad, tipo fuerza,...)
{

}
// use tres puntos porque por ahi es necesario algun otro dato
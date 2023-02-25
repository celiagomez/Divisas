#include <string>
#include <math.h>
#include "logicaDivisas.h" //incluye fichero

namespace Divisas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de segunda_interfaz
	/// </summary>

	public ref class conversor : public System::Windows::Forms::Form
	{
		//contructor segunda ventana
	public:
		conversor(void)
		{
			InitializeComponent();

		}

	protected:

		//destructor segunda ventana
		~conversor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ etiqueta_ventana2;
	private: System::Windows::Forms::Label^ etiqueta_cantidad;
	private: System::Windows::Forms::TextBox^ caja_cantidad;
	private: System::Windows::Forms::Label^ etiqueta_a;
	private: System::Windows::Forms::TextBox^ caja_resultado;
	private: System::Windows::Forms::Label^ etiqueta_resultado;
	private: System::Windows::Forms::Button^ boton_borrar;
	private: System::Windows::Forms::Button^ boton_usd;
	private: System::Windows::Forms::Button^ boton_yen;
	private: System::Windows::Forms::Button^ boton_gbp;


	private: System::ComponentModel::IContainer^ components;

	private:



#pragma region Windows Form Designer generated code

		// Método necesario para admitir el Diseñador. No se puede modificar
		//
		void InitializeComponent(void)
		{
			this->etiqueta_ventana2 = (gcnew System::Windows::Forms::Label());
			this->etiqueta_cantidad = (gcnew System::Windows::Forms::Label());
			this->caja_cantidad = (gcnew System::Windows::Forms::TextBox());
			this->etiqueta_a = (gcnew System::Windows::Forms::Label());
			this->caja_resultado = (gcnew System::Windows::Forms::TextBox());
			this->etiqueta_resultado = (gcnew System::Windows::Forms::Label());
			this->boton_borrar = (gcnew System::Windows::Forms::Button());
			this->boton_usd = (gcnew System::Windows::Forms::Button());
			this->boton_yen = (gcnew System::Windows::Forms::Button());
			this->boton_gbp = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// etiqueta_ventana2
			// 
			this->etiqueta_ventana2->AutoSize = true;
			this->etiqueta_ventana2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->etiqueta_ventana2->Location = System::Drawing::Point(108, 32);
			this->etiqueta_ventana2->Name = L"etiqueta_ventana2";
			this->etiqueta_ventana2->Size = System::Drawing::Size(226, 31);
			this->etiqueta_ventana2->TabIndex = 0;
			this->etiqueta_ventana2->Text = L"Empiece a trabajar";
			this->etiqueta_ventana2->Click += gcnew System::EventHandler(this, &conversor::label1_Click);
			// 
			// etiqueta_cantidad
			// 
			this->etiqueta_cantidad->AutoSize = true;
			this->etiqueta_cantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->etiqueta_cantidad->Location = System::Drawing::Point(148, 91);
			this->etiqueta_cantidad->Name = L"etiqueta_cantidad";
			this->etiqueta_cantidad->Size = System::Drawing::Size(129, 16);
			this->etiqueta_cantidad->TabIndex = 8;
			this->etiqueta_cantidad->Text = L"Introduzca cantidad";
			this->etiqueta_cantidad->Click += gcnew System::EventHandler(this, &conversor::label1_Click_1);
			// 
			// caja_cantidad
			// 
			this->caja_cantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->caja_cantidad->Location = System::Drawing::Point(160, 121);
			this->caja_cantidad->Name = L"caja_cantidad";
			this->caja_cantidad->Size = System::Drawing::Size(100, 21);
			this->caja_cantidad->TabIndex = 9;
			this->caja_cantidad->TextChanged += gcnew System::EventHandler(this, &conversor::caja_cantidad_TextChanged);
			// 
			// etiqueta_a
			// 
			this->etiqueta_a->AutoSize = true;
			this->etiqueta_a->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->etiqueta_a->Location = System::Drawing::Point(176, 173);
			this->etiqueta_a->Name = L"etiqueta_a";
			this->etiqueta_a->Size = System::Drawing::Size(69, 16);
			this->etiqueta_a->TabIndex = 10;
			this->etiqueta_a->Text = L"Cambiar a";
			this->etiqueta_a->Click += gcnew System::EventHandler(this, &conversor::label1_Click_2);
			// 
			// caja_resultado
			// 
			this->caja_resultado->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->caja_resultado->Location = System::Drawing::Point(132, 297);
			this->caja_resultado->Name = L"caja_resultado";
			this->caja_resultado->Size = System::Drawing::Size(147, 21);
			this->caja_resultado->TabIndex = 14;
			this->caja_resultado->TextChanged += gcnew System::EventHandler(this, &conversor::caja_resultado_TextChanged);
			// 
			// etiqueta_resultado
			// 
			this->etiqueta_resultado->AutoSize = true;
			this->etiqueta_resultado->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->etiqueta_resultado->Location = System::Drawing::Point(169, 269);
			this->etiqueta_resultado->Name = L"etiqueta_resultado";
			this->etiqueta_resultado->Size = System::Drawing::Size(68, 16);
			this->etiqueta_resultado->TabIndex = 15;
			this->etiqueta_resultado->Text = L"Resultado";
			this->etiqueta_resultado->Click += gcnew System::EventHandler(this, &conversor::etiqueta_resultado_Click);
			// 
			// boton_borrar
			// 
			this->boton_borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_borrar->Location = System::Drawing::Point(160, 333);
			this->boton_borrar->Name = L"boton_borrar";
			this->boton_borrar->Size = System::Drawing::Size(93, 27);
			this->boton_borrar->TabIndex = 17;
			this->boton_borrar->Text = L"Borrar";
			this->boton_borrar->UseVisualStyleBackColor = true;
			this->boton_borrar->Click += gcnew System::EventHandler(this, &conversor::boton_borrar_Click);
			// 
			// boton_usd
			// 
			this->boton_usd->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_usd->Location = System::Drawing::Point(297, 213);
			this->boton_usd->Name = L"boton_usd";
			this->boton_usd->Size = System::Drawing::Size(84, 25);
			this->boton_usd->TabIndex = 18;
			this->boton_usd->Text = L"USD";
			this->boton_usd->UseVisualStyleBackColor = true;
			this->boton_usd->Click += gcnew System::EventHandler(this, &conversor::button1_Click);
			// 
			// boton_yen
			// 
			this->boton_yen->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_yen->Location = System::Drawing::Point(166, 213);
			this->boton_yen->Name = L"boton_yen";
			this->boton_yen->Size = System::Drawing::Size(84, 25);
			this->boton_yen->TabIndex = 19;
			this->boton_yen->Text = L"JPY";
			this->boton_yen->UseVisualStyleBackColor = true;
			this->boton_yen->Click += gcnew System::EventHandler(this, &conversor::button2_Click);
			// 
			// boton_gbp
			// 
			this->boton_gbp->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_gbp->Location = System::Drawing::Point(29, 213);
			this->boton_gbp->Name = L"boton_gbp";
			this->boton_gbp->Size = System::Drawing::Size(84, 25);
			this->boton_gbp->TabIndex = 20;
			this->boton_gbp->Text = L"GBP";
			this->boton_gbp->UseVisualStyleBackColor = true;
			this->boton_gbp->Click += gcnew System::EventHandler(this, &conversor::boton_gbp_Click);
			// 
			// segunda_interfaz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(423, 400);
			this->Controls->Add(this->boton_gbp);
			this->Controls->Add(this->boton_yen);
			this->Controls->Add(this->boton_usd);
			this->Controls->Add(this->boton_borrar);
			this->Controls->Add(this->etiqueta_resultado);
			this->Controls->Add(this->caja_resultado);
			this->Controls->Add(this->etiqueta_a);
			this->Controls->Add(this->caja_cantidad);
			this->Controls->Add(this->etiqueta_cantidad);
			this->Controls->Add(this->etiqueta_ventana2);
			this->Name = L"segunda_interfaz";
			this->Text = L"My Currency APP";
			this->Load += gcnew System::EventHandler(this, &conversor::segunda_interfaz_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void segunda_interfaz_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void check_EUR_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void check_GBP_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void etiqueta_resultado_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void caja_resultado_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void boton_borrar_Click(System::Object^ sender, System::EventArgs^ e) {

		//función que borra los datos de las caja de texto al pulsar el boton
		void borrar(); {

			caja_cantidad->Clear();
			caja_resultado->Clear();
		}


	}
	private: System::Void caja_cantidad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void check_USD2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//parte logica del bton USD

		USDConversion objeto1; //se declara un objeto de la clase USDConversion, que se utiliza para realizar la conversión de moneda.

		/*Se realiza la conversión de USD a la moneda especificada por "objeto1".
		Primero, se convierte el texto que se encuentra en la caja de texto "caja_cantidad" a un valor de tipo "double" utilizando la función "ToDouble" de la clase "System::Convert".
		Luego, se multiplica este valor por el resultado de llamar al método "convertir" del objeto "objeto1".
		El resultado se almacena en una variable llamada "resultado" de tipo entero.*/
		int resultado = System::Convert::ToDouble(caja_cantidad->Text) * objeto1.convertir();

		/*Se muestra el resultado de la conversión en la caja de texto "caja_resultado".
		Primero, se convierte el valor de la variable "resultado" a una cadena utilizando la función "ToString" de la clase "System::Convert".
		Luego, se asigna esta cadena a la propiedad "Text" de la caja de texto "caja_resultado" utilizando el operador "->".*/
		caja_resultado->Text = System::Convert::ToString(resultado);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//parte logica del bton USD
		JPYConversion objeto;

		int resultado = System::Convert::ToDouble(caja_cantidad->Text) * objeto.convertir();
		caja_resultado->Text = System::Convert::ToString(resultado);
	}
	private: System::Void boton_gbp_Click(System::Object^ sender, System::EventArgs^ e) {
		//parte logica del bton USD
		GBPConversion objeto2;

		int resultado = System::Convert::ToDouble(caja_cantidad->Text) * objeto2.convertir();
		caja_resultado->Text = System::Convert::ToString(resultado);
	}
	};
}

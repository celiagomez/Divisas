#pragma once


#include <string>
#include "Conversor.h" //incluye 
using namespace std;// incluye librería estandar de c++

namespace Divisas { // define un espacio de nombres llamado "APP2"

	/*Estas líneas de código hacen que los espacios de nombres requeridos para crear una aplicación de Windows en C++/CLI estén disponibles en el código.
	Estos incluyen los espacios de nombres para los formularios de Windows, la manipulación de datos y los gráficos.*/
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Data::Sql;

	/// </summary>
	public ref class login : public System::Windows::Forms::Form // define una clase pública llamada "primera_ventana" que hereda de la clase "Form" de Windows Forms. 
		//El modificador "ref" indica que la clase se compila para su uso con (CLR).
	{
		//constructor de la clase primera ventana
	public:
		login(void)
		{
			InitializeComponent();

		}

	protected:
		//destructor de la clase "primera_ventana". 
		~login()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ etiqueta_bienvenidos;// Declara una variable privada llamada etiqueta_bienvenidos del tipo System::Windows::Forms::Label^
	private: System::Windows::Forms::Button^ boton_registro;// Declara una variable privada llamada boton_registro del tipo System::Windows::Forms::Button^
	private: System::Windows::Forms::TextBox^ texto_usuario;// Declara una variable privada llamada texto_usuario del tipo System::Windows::Forms::TextBox^
	private: System::Windows::Forms::Label^ etiqueta_usuario;// Declara una variable privada llamada etiqueta_usuario del tipo System::Windows::Forms::Label^
	private: System::Windows::Forms::TextBox^ texto_contra;// Declara una variable privada llamada texto_contra del tipo System::Windows::Forms::TextBox^
	private: System::Windows::Forms::Label^ etiqueta_contra;// Declara una variable privada llamada etiqueta_contra del tipo System::Windows::Forms::Label^
	private: System::Windows::Forms::LinkLabel^ link_etiqueta;// Declara una variable privada llamada link_eiqueta del tipo System::Windows::Forms::LinkLabel^

	private:
		/// Esta variable es utilizada por el diseñador de formularios de Visual Studio para almacenar todos los componentes agregados al formulario
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code 
		/// funcion que inicializa los componentes de la ventana
		void InitializeComponent(void)
		{ /*el operador -> es usado para acceder a las propiedades y métodos del objeto.*/
			this->etiqueta_bienvenidos = (gcnew System::Windows::Forms::Label()); //Crea un nuevo objeto Label y lo asigna a la variable de clase "etiqueta_bienvenidos" 
			this->boton_registro = (gcnew System::Windows::Forms::Button()); // nuevo objeto  Button y lo asigna a la variable de clase "boton_registro".
			this->texto_usuario = (gcnew System::Windows::Forms::TextBox()); //nuevo objeto TextBox y lo asigna a la variable de clase "texto_usuario".
			this->etiqueta_usuario = (gcnew System::Windows::Forms::Label());//nuevo objeto Label y lo asigna a la variable de clase "etiqueta_usuario".
			this->texto_contra = (gcnew System::Windows::Forms::TextBox());///
			this->etiqueta_contra = (gcnew System::Windows::Forms::Label());///
			this->link_etiqueta = (gcnew System::Windows::Forms::LinkLabel());//nuevo objeto LinkLabel y lo asigna a la variable de clase "link_etiqueta".
			this->SuspendLayout(); // método que se llama para suspender temporalmente el diseño de la ventana mientras se agregan y configuran controles
			// 
			// etiqueta_bienvenidos
			//configura la etiqueta de bienvenida "etiqueta_bienvenidos" que se muestra en la ventana. 
			this->etiqueta_bienvenidos->AutoSize = true;
			this->etiqueta_bienvenidos->BackColor = System::Drawing::SystemColors::ActiveCaption; //color de fondo
			this->etiqueta_bienvenidos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;//estilo
			this->etiqueta_bienvenidos->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0))); //fuente de texto
			this->etiqueta_bienvenidos->ForeColor = System::Drawing::Color::Black; // color del texto
			this->etiqueta_bienvenidos->Location = System::Drawing::Point(132, 36); // posicion
			this->etiqueta_bienvenidos->Name = L"etiqueta_bienvenidos"; // asignación del nombre
			this->etiqueta_bienvenidos->Size = System::Drawing::Size(171, 34);// tamaño
			this->etiqueta_bienvenidos->TabIndex = 0; // La propiedad TabIndex se utiliza para especificar el orden en que los controles reciben el foco cuando el usuario presiona la tecla Tab. Un valor de 0 indica que este control es el primero en recibir el foco.
			this->etiqueta_bienvenidos->Text = L"Inicie sesión";
			this->etiqueta_bienvenidos->Click += gcnew System::EventHandler(this, &login::label1_Click); //Agrega un controlador de eventos para el evento Click de la etiqueta etiqueta_bienvenido.
			//gnew se utiliza para crear un nuevo objeto de delegado que se utiliza para conectar el evento con el controlador de eventos. 
			// System::EventHandler es un delegado que se utiliza para representar un método que maneja un evento sin argumentos
			// 
			// boton_registro
			// 
			this->boton_registro->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_registro->Location = System::Drawing::Point(138, 287);
			this->boton_registro->Name = L"boton_registro";
			this->boton_registro->Size = System::Drawing::Size(140, 32);
			this->boton_registro->TabIndex = 1;
			this->boton_registro->Text = L"Inicia sesión";
			this->boton_registro->UseVisualStyleBackColor = true;
			this->boton_registro->Click += gcnew System::EventHandler(this, &login::boton_registro_Click);
			// 
			// texto_usuario
			// 
			this->texto_usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->texto_usuario->Location = System::Drawing::Point(138, 142);
			this->texto_usuario->Name = L"texto_usuario";
			this->texto_usuario->Size = System::Drawing::Size(149, 23);
			this->texto_usuario->TabIndex = 2;
			this->texto_usuario->TextChanged += gcnew System::EventHandler(this, &login::textBox1_TextChanged);
			// 
			// etiqueta_usuario
			// 
			this->etiqueta_usuario->AutoSize = true;
			this->etiqueta_usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->etiqueta_usuario->Location = System::Drawing::Point(184, 123);
			this->etiqueta_usuario->Name = L"etiqueta_usuario";
			this->etiqueta_usuario->Size = System::Drawing::Size(52, 16);
			this->etiqueta_usuario->TabIndex = 3;
			this->etiqueta_usuario->Text = L"Usuario";
			// 
			// texto_contra
			// 
			this->texto_contra->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->texto_contra->Location = System::Drawing::Point(138, 226);
			this->texto_contra->Name = L"texto_contra";
			this->texto_contra->PasswordChar = '*';
			this->texto_contra->Size = System::Drawing::Size(149, 23);
			this->texto_contra->TabIndex = 5;
			// 
			// etiqueta_contra
			// 
			this->etiqueta_contra->AutoSize = true;
			this->etiqueta_contra->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->etiqueta_contra->Location = System::Drawing::Point(173, 207);
			this->etiqueta_contra->Name = L"etiqueta_contra";
			this->etiqueta_contra->Size = System::Drawing::Size(73, 16);
			this->etiqueta_contra->TabIndex = 6;
			this->etiqueta_contra->Text = L"Contraseña";
			// 
			// link_etiqueta
			// 
			this->link_etiqueta->AutoSize = true;
			this->link_etiqueta->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->link_etiqueta->LinkColor = System::Drawing::Color::Black;
			this->link_etiqueta->Location = System::Drawing::Point(135, 357);
			this->link_etiqueta->Name = L"link_etiqueta";
			this->link_etiqueta->Size = System::Drawing::Size(144, 14);
			this->link_etiqueta->TabIndex = 7;
			this->link_etiqueta->TabStop = true;
			this->link_etiqueta->Text = L"He olvidado mi contraseña";
			this->link_etiqueta->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &login::link_etiqueta_LinkClicked);
			// 
			// primera_ventana
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(423, 400);
			this->Controls->Add(this->link_etiqueta);
			this->Controls->Add(this->etiqueta_contra);
			this->Controls->Add(this->texto_contra);
			this->Controls->Add(this->etiqueta_usuario);
			this->Controls->Add(this->texto_usuario);
			this->Controls->Add(this->boton_registro);
			this->Controls->Add(this->etiqueta_bienvenidos);
			this->Name = L"primera_ventana";
			this->Text = L"My CurrencyApp";
			this->Load += gcnew System::EventHandler(this, &login::Form1_Load);
			this->ResumeLayout(false);//suspende temporalmente la lógica de disposición del formulario
			this->PerformLayout();//para realizar cualquier operación de disposición pendiente.

		}
#pragma endregion
		/*las siguientes lineas se generan automáticamente cuando se agregan controles al formulario y se hace doble clic en ellos para crear manejadores de eventos.
		 El código dentro de estos métodos se deja vacío, ya que se espera que se sobrescriba con lógica personalizada .*/
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void boton_registro_Click(System::Object^ sender, System::EventArgs^ e) {
		Divisas::conversor^ segundo_form = gcnew Divisas::conversor(); // creamos una instancia que es segunda interfaz

		string usuario = this->toStandardString(this->texto_usuario->Text); // definimos atributos 
		string contraseña = this->toStandardString(this->texto_contra->Text);

		//funcion login 
		void login_app(); {

			if (usuario == "celia_g@oasistech.com" && contraseña == "CQ3423") {
				MessageBox::Show("Usuario correcto");// mensaje que aparece si los credenciales son correctos
				this->Visible = false;//cierra la ventana anterior
				segundo_form->ShowDialog(); //abre la ventana
				this->Visible = true; //visibiliza la nueva
			}
			else
			{
				MessageBox::Show("Usuario no encontrado");// mensaje que aparece si los credenciales no son correctos
			}
		}

	}
	private: static string toStandardString(System::String^ string) { // encapsular las string para que el programa las reconozca en los textbox

		using System::Runtime::InteropServices::Marshal;//Esta línea importa el espacio de nombres "Marshal"
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);//Esta línea convierte un objeto System::String^ en un puntero  una cadena ANSI mediante la función StringToHGlobalAnsi() de la clase Marshal. 
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer()); //Esta línea convierte el objeto System::IntPtr en un puntero a un char* para que pueda usarse como un puntero a una cadena de caracteres C++ nativa.
		std::string returnString(charPointer, string->Length);//utiliza el puntero a char* para inicializar un objeto std::string, que se devuelve al final de la función.
		Marshal::ZeroFreeGlobalAllocAnsi(pointer); //Esta línea libera la memoria reservada para la cadena ANSI mediante la función ZeroFreeGlobalAllocAnsi() de la clase Marshal
		return returnString;
	}

	private: System::Void link_etiqueta_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		MessageBox::Show("Envie un email de incidencia al correo 'incidencias@osasistech.com' para recuperar su contraseña");//cuando se hace click en en label aparece ese mensaje

	}
	};
}

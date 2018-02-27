#include "Post.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PostAssigner::Post form;
	Application::Run(%form);
}
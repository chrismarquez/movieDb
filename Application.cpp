//
// Created by christopher on 12/06/20.
//

#include "Application.h"

using namespace std;

Application::Application() {

}


void Application::run() {
    int selection = -1;
    string userInput;
    while (selection != 0) {
        printMenu();
        cin >> userInput;
        try {
            selection = stoi(userInput);
            string file;
            switch (selection) {
                case 1:
                    cout << "Introduzca el nombre de archivo" << endl;
                    cin >> file;
                    videoRepository.loadVideos(file);
                    break;
                case 2:
                    break;
                default:
                    cout << "La opción no es válida. Seleccione una opción del menú" << endl;
                    break;
            }
        } catch (exception& e) {
            cout << "El comando no es válido. Seleccione una opción del menú" << endl;
        }
    }
    cout << "Terminando aplicación..." << endl;
}

void Application::printMenu() {
    cout << "Bienvenido. Seleccione una opción del menú:" << endl;
    cout << "1. Cargar archivo de datos" << endl;
    cout << "2. Mostrar los videos en general con una cierta calificación o de un cierto género" << endl;
    cout << "3. Mostrar los episodios de una determinada serie con una calificacion determinada" << endl;
    cout << "4. Mostrar las películas con cierta calificacion" << endl;
    cout << "5. Calificar un video" << endl;
    cout << "0. Salir del programa" << endl;
    cout << endl << "Seleccione una opción [1 - 5] o 0 para salir" << endl;
}

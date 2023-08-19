#pragma once


class Empleado{
private:
    int _dni;
    char _nombre[35];
    char _apellido[35];
    char _domicilio[35];
    char _email[100];
    int _nroDomicilio;
    int _dia;
    int _mes;
    int _anio;
    int _cargo;


    void setDni(int dni){
        _dni = dni;
    }
    void getDni(){
        return _dia;
    }
    void setDia(int dia){
        _dia = dia;
    }
    void getDia(){
        return _dni;
    }
    void setMes(int mes){
        _mes = mes;
    }
    void getMes(){
        return _mes;
    }
    void setAnio(int anio){
        _anio = anio;
    }
    void getAnio(){
        return _anio;
    }
    void setCargo(int cargo){
        _cargo = cargo;
    }
    void getCargo(){
        return _cargo;
    }


};

#define Sus 2
#define Sus_dreapta 3
#define Jos_dreapta 4
#define Jos 5
#define Jos_stanga 6
#define Sus_stanga 7
#define Mij 8

void setup()
{
  pinMode(Sus, OUTPUT);
  pinMode(Sus_dreapta, OUTPUT);
  pinMode(Jos_dreapta, OUTPUT);
  pinMode(Jos, OUTPUT);
  pinMode(Jos_stanga, OUTPUT);
  pinMode(Sus_stanga, OUTPUT);
  pinMode(Mij, OUTPUT);
  
  Serial.begin(9600);
}

void ch_a() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_b() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_c() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, LOW);
}

void ch_d() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, HIGH);
}

void ch_e() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_f() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_g() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, LOW);
}

void ch_h() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_i() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, LOW);
}

void ch_j() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, LOW);
}

void ch_k() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_l() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, LOW);
}

void ch_m() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, HIGH);
}

void ch_n() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, HIGH);
}

void ch_o() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, HIGH);
}

void ch_p() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_q() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, LOW);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_r() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, LOW);
}

void ch_s() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, HIGH);
}

void ch_t() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_u() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, LOW);
}

void ch_v() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, LOW);
}

void ch_x() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_y() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, HIGH);
}

void ch_z() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, HIGH);
}

void ch_0() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_1() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, LOW);
}

void ch_2() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, HIGH);
}

void ch_3() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, LOW);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, HIGH);
}

void ch_4() {
  digitalWrite(Sus, LOW);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, LOW);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_5() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, LOW);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, HIGH);
}

void ch_6() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, LOW);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_7() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, LOW);
  digitalWrite(Jos_stanga, LOW);
  digitalWrite(Sus_stanga, LOW);
  digitalWrite(Mij, LOW);
}

void ch_8() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, HIGH);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void ch_9() {
  digitalWrite(Sus, HIGH);
  digitalWrite(Sus_dreapta, HIGH);
  digitalWrite(Jos_dreapta, HIGH);
  digitalWrite(Jos, HIGH);
  digitalWrite(Jos_stanga, LOW);
  digitalWrite(Sus_stanga, HIGH);
  digitalWrite(Mij, HIGH);
}

void loop()
{
   if (Serial.available()/*Daca am comunicatie seriala*/){
      String DataRead = Serial.readString(); // Citeste un sir de caractere terminate cu "enter"
    
      Serial.println(DataRead); // Afiseaza sirul initial
      
      if (DataRead == "A")
        ch_a();
      if (DataRead == "B")
        ch_b();
      if (DataRead == "C")
        ch_c();
      if (DataRead == "D")
        ch_d();
      if (DataRead == "E")
        ch_e();
      if (DataRead == "F")
        ch_f();
      if (DataRead == "G")
        ch_g();
      if (DataRead == "H")
        ch_h();
      if (DataRead == "I")
        ch_i();
     if (DataRead == "J")
        ch_j();
     if (DataRead == "K")
        ch_k();
     if (DataRead == "L")
        ch_l();
     if (DataRead == "M")
        ch_m();
     if (DataRead == "N")
        ch_n();
     if (DataRead == "O")
        ch_o();
     if (DataRead == "P")
        ch_p();
     if (DataRead == "Q")
        ch_q();
     if (DataRead == "R")
        ch_r();
     if (DataRead == "S")
        ch_s();
     if (DataRead == "T")
        ch_t();
     if (DataRead == "U")
        ch_u();
     if (DataRead == "V")
        ch_v();
     if (DataRead == "X")
        ch_x();
     if (DataRead == "Y")
        ch_y();
     if (DataRead == "Z")
        ch_z();
     if (DataRead == "0")
        ch_0();
     if (DataRead == "1")
        ch_1();
     if (DataRead == "2")
        ch_2();
     if (DataRead == "3")
        ch_3();
     if (DataRead == "4")
        ch_4();
     if (DataRead == "5")
        ch_5();
     if (DataRead == "6")
        ch_6();
     if (DataRead == "7")
        ch_7();
     if (DataRead == "8")
        ch_8();
     if (DataRead == "9")
        ch_9();
    }
}

! date 2020-04-22

program convert
! program untuk konversi uang
implicit none
integer :: rupiah, dolar, konversi, total
character :: name*10
print *, 'siapa namamu?'
read *, name
print *, 'hi ',name,'! masukkan jumlah uangmu yang rupiah dan yang dolar'
read *, rupiah, dolar
konversi = 15543 ! nilai 1 dolar ke rupiah tgl 22 apr 2020 sore
total = rupiah + dolar*konversi
print *, 'total uangmu ', total, ' rupiah'
end program convert

! Capaian
! Pada akhir lembarkerja ini, saya akan bisa:

! Membuat dan menjalankan sebuah program FORTRAN 95
! Memahami struktur dasar program
! Mulai membiasakan diri dengan galat (error)
! Mulai memahami tipe-tipe variabel real, integer dan character
! Menyimpan salinan output ke berkas teks

! Hal yang saya lakukan:
! Memastikan compiler Fortran sudah terinstal di komputer
! > dpkg -l | grep fortran
! Ada gfortran. Compile program dengan cara:
! > gfortran file.f95
! > ./a.out

! date 2020-04-22

program sum                        ! nama program
!ini komentar                      ! komentar diawali tanda seru
real :: ans,x,y                    ! deklarasi tipe variabel
print *, 'Masukkan dua angka'      ! output
read *, x                          ! input
read *, y                          ! input
ans=x+y                            ! aritmatika
print *, 'Jumlahnya adalah', ans   ! output
end program sum                    ! akhir program

! beberapa istilah yang dipelajari:
! statement; variable; operator; keyword
! tiap baris; misal:ans,x,y; misal:+,=; misal:read,print

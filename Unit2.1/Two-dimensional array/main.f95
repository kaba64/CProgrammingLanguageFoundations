program array
implicit none
!real, dimension(4,3)::a = reshape((/1.,1.,1.,1.,2.,2.,2.,2.,3.,3.,3.,3./),(/4,3/))
real, dimension(4,3)::a
integer::i,j
do i=1,4,1
 do j=1,3,1
  a(i,j)=real(j)
 end do
end do
end program array

!=====================================================================
!
!                          S p e c f e m 3 D
!                          -----------------
!
!          Main authors: Dimitri Komatitsch and Jeroen Tromp
!    Seismological Laboratory, California Institute of Technology, USA
!             and University of Pau / CNRS / INRIA, France
! (c) California Institute of Technology and University of Pau / CNRS / INRIA
!                            February 2008
!
! This program is free software; you can redistribute it and/or modify
! it under the terms of the GNU General Public License as published by
! the Free Software Foundation; either version 3 of the License, or
! (at your option) any later version.
!
! This program is distributed in the hope that it will be useful,
! but WITHOUT ANY WARRANTY; without even the implied warranty of
! MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
! GNU General Public License for more details.
!
! You should have received a copy of the GNU General Public License along
! with this program; if not, write to the Free Software Foundation, Inc.,
! 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
!
!=====================================================================

  subroutine get_value_integer(value_to_get, name, default_value)

  implicit none

  integer value_to_get, default_value
  character(len=*) name

  call unused_string(name)

  value_to_get = default_value

  end subroutine get_value_integer

!--------------------

  subroutine get_value_double_precision(value_to_get, name, default_value)

  implicit none

  double precision value_to_get, default_value
  character(len=*) name

  call unused_string(name)

  value_to_get = default_value

  end subroutine get_value_double_precision

!--------------------

  subroutine get_value_logical(value_to_get, name, default_value)

  implicit none

  logical value_to_get, default_value
  character(len=*) name

  call unused_string(name)

  value_to_get = default_value

  end subroutine get_value_logical

!--------------------

  subroutine get_value_string(value_to_get, name, default_value)

  implicit none

  character(len=*) value_to_get, default_value
  character(len=*) name

  call unused_string(name)

  value_to_get = default_value

  end subroutine get_value_string

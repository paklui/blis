/*

   BLIS    
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2014, The University of Texas at Austin

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name of The University of Texas nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef BLIS_SCALCJRIS_H
#define BLIS_SCALCJRIS_H

// scalcjris

#define bli_sscalcjris( conj, ar, ai, xr, xi ) \
{ \
	bli_sscalris( (ar), (ai), (xr), (xi) ); \
}

#define bli_dscalcjris( conj, ar, ai, xr, xi ) \
{ \
	bli_dscalris( (ar), (ai), (xr), (xi) ); \
}

#define bli_cscalcjris( conj, ar, ai, xr, xi ) \
{ \
	if ( bli_is_conj( conj ) ) { bli_cscaljris( (ar), (ai), (xr), (xi) ); } \
	else                       { bli_cscalris(  (ar), (ai), (xr), (xi) ); } \
}

#define bli_zscalcjris( conj, ar, ai, xr, xi ) \
{ \
	if ( bli_is_conj( conj ) ) { bli_zscaljris( (ar), (ai), (xr), (xi) ); } \
	else                       { bli_zscalris(  (ar), (ai), (xr), (xi) ); } \
}

#define bli_iscalcjris( conj, ar, ai, xr, xi ) \
{ \
	bli_iscalris( (ar), (xi), (xr), (xi) ); \
}

#define bli_scscalcjris( conj, ar, ai, xr, xi ) \
{ \
	bli_scscalris( (ar), (ai), (xr), (xi) ); \
}

#define bli_dzscalcjris( conj, ar, ai, xr, xi ) \
{ \
	bli_dzscalris( (ar), (ai), (xr), (xi) ); \
}

#endif

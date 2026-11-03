#include <cstdio>
#include <algorithm>

using namespace std;

typedef pair< int, int > par;
#define mini first
#define maks second

const int MAXN = 200010;
const int off = 1<<18; // ~250000

int pos[MAXN], niz[MAXN];
par T[2*off];
int n, m;

par merge( const par &a, const par &b ) {
  return par( min( a.mini, b.mini ), max( a.maks, b.maks ) );
}

par query( int i, int lo, int hi, int a, int b ) {
  if( lo >= b || hi <= a ) return par( n, -1 );
  if( lo >= a && hi <= b ) return T[i];
  par l = query( i*2, lo, (lo+hi)/2, a, b );
  par r = query( i*2+1, (lo+hi)/2, hi, a, b );
  return merge( l, r );
}

void update( int x ) {
  T[off+x] = par( pos[x], pos[x] );
  x += off;
  for( x /= 2; x; x /= 2 )
    T[x] = merge( T[x*2], T[x*2+1] );
}

int main( void ) {
  scanf( "%d %d", &n, &m );
  for( int i = 0; i < n; ++i ) {
    scanf( "%d", niz+i ); --niz[i];
    pos[ niz[i] ] = i;
  }

  // inicijalizacija tournament stabla
  for( int i = 0; i < off; ++i )
    if( i < n ) T[off+i] = par( pos[i], pos[i] ); else
      T[off+i] = par( n, -1 );
  for( int i = off-1; i > 0; --i )
    T[i] = merge( T[i*2], T[i*2+1] );

  for( int i = 0; i < m; ++i ) {
    int z, x, y;
    scanf( "%d %d %d", &z, &x, &y );
    --x, --y;

    if( z == 1 ) { // zamjena brojeva na pozicijama x, y
      swap( pos[ niz[x] ], pos[ niz[y] ] );
      update( niz[x] );
      update( niz[y] );
      swap( niz[x], niz[y] );
    } else { // upit
      par p = query( 1, 0, off, x, y+1 );
      if( p.second-p.first == y-x ) puts( "DA" ); else
        puts( "NE" );
    }
  }

  return 0;
}

#include "TriangleSoup.h"
#include "Ray.h"
// Hint
#include "first_hit.h"

bool TriangleSoup::intersect(
  const Ray & ray, const double min_t, double & t, Eigen::Vector3d & n) const
{

  ////////////////////////////////////////////////////////////////////////////

	int hit_id;
	return first_hit(ray, min_t, triangles, hit_id, t, n);

	//// basically exact same as first_hit, except no need to index (not returning hit_id)
	//bool hit = false; // whether or not there was a hit
	//t = -1; // first hit t value, will be output
	//double cur_t; // current t value, updates every loop
	//Eigen::Vector3d cur_n; // current n value, updates every loop

	//// loop through triangles, if found new min, update t and n
	//for (auto triangle = triangles.begin(); triangle != triangles.end(); ++triangle) {

	//	// if Object.intersect returns true (hits object) 
	//	if ((**triangle).intersect(ray, min_t, cur_t, cur_n)) {
	//		hit = true;
	//		// if t < cur_t OR cur_t == -1: update variables
	//		if ((t == -1) || (cur_t < t)) {
	//			t = cur_t;
	//			n = cur_n;
	//		}
	//	}
	//}

  ////////////////////////////////////////////////////////////////////////////
}




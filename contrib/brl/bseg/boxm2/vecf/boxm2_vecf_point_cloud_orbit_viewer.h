#ifndef boxm2_vecf_point_cloud_orbit_viewer_h_
#define boxm2_vecf_point_cloud_orbit_viewer_h_
//:
// \file
// \brief  Add orbit display information to an existing point cloud
//
// \author J.L. Mundy
// \date   25 July 2015
//

#include "boxm2_vecf_orbit_params.h"
#include <vcl_vector.h>
#include <vgl/vgl_point_3d.h>
#include <vgl/vgl_sphere_3d.h>
struct cpoint{
cpoint():r_(0), g_(255), b_(0){}
cpoint(vgl_point_3d<double> pt, int r, int g, int b): pt_(pt), r_(r), g_(g), b_(b){}
  vgl_point_3d<double> pt_;
  int r_;
  int g_;
  int b_;
};
class boxm2_vecf_point_cloud_orbit_viewer{
 public:
  boxm2_vecf_point_cloud_orbit_viewer() {}


  bool set_point_cloud(vcl_string const& pc_path);
  void add_sphere(vgl_sphere_3d<double> const& sph, int r = 0, int g = 255, int b = 0);
  bool save_point_cloud(vcl_string const& pc_path) const;
  bool display_orbit(boxm2_vecf_orbit_params opr, bool is_right);

 private:
   vcl_vector<vgl_point_3d<double> > draw_sphere(vgl_sphere_3d<double> const& sph);
   vcl_vector<cpoint> pc_;
};
#endif// boxm2_vecf_point_cloud_orbit_viewer

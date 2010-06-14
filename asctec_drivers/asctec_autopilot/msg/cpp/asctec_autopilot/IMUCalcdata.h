/* auto-generated by genmsg_cpp from /home/lucid/ros/stacks/ccny-ros-pkg/asctec_drivers/asctec_autopilot/msg/IMUCalcdata.msg.  Do not edit! */
#ifndef ASCTEC_AUTOPILOT_IMUCALCDATA_H
#define ASCTEC_AUTOPILOT_IMUCALCDATA_H

#include <string>
#include <vector>
#include "ros/message.h"
#include "ros/debug.h"
#include "ros/assert.h"
#include "ros/time.h"

namespace asctec_autopilot
{

//! \htmlinclude IMUCalcdata.msg.html

class IMUCalcdata : public ros::Message
{
public:
  typedef boost::shared_ptr<IMUCalcdata> Ptr;
  typedef boost::shared_ptr<IMUCalcdata const> ConstPtr;

  typedef int64_t _angle_roll_type;
  typedef int64_t _angle_pitch_type;
  typedef int64_t _angle_yaw_type;
  typedef int64_t _acc_x_calib_type;
  typedef int64_t _acc_y_calib_type;
  typedef int64_t _acc_z_calib_type;
  typedef int64_t _acc_x_type;
  typedef int64_t _acc_y_type;
  typedef int64_t _acc_z_type;
  typedef int64_t _height_type;
  typedef int64_t _height_reference_type;

  int64_t angle_roll;
  int64_t angle_pitch;
  int64_t angle_yaw;
  int64_t acc_x_calib;
  int64_t acc_y_calib;
  int64_t acc_z_calib;
  int64_t acc_x;
  int64_t acc_y;
  int64_t acc_z;
  int64_t height;
  int64_t height_reference;

  IMUCalcdata() : ros::Message(),
    angle_roll(0),
    angle_pitch(0),
    angle_yaw(0),
    acc_x_calib(0),
    acc_y_calib(0),
    acc_z_calib(0),
    acc_x(0),
    acc_y(0),
    acc_z(0),
    height(0),
    height_reference(0)
  {
  }
  IMUCalcdata(const IMUCalcdata &copy) : ros::Message(),
    angle_roll(copy.angle_roll),
    angle_pitch(copy.angle_pitch),
    angle_yaw(copy.angle_yaw),
    acc_x_calib(copy.acc_x_calib),
    acc_y_calib(copy.acc_y_calib),
    acc_z_calib(copy.acc_z_calib),
    acc_x(copy.acc_x),
    acc_y(copy.acc_y),
    acc_z(copy.acc_z),
    height(copy.height),
    height_reference(copy.height_reference)
  {
    (void)copy;
  }
  IMUCalcdata &operator =(const IMUCalcdata &copy)
  {
    if (this == &copy)
      return *this;
    angle_roll = copy.angle_roll;
    angle_pitch = copy.angle_pitch;
    angle_yaw = copy.angle_yaw;
    acc_x_calib = copy.acc_x_calib;
    acc_y_calib = copy.acc_y_calib;
    acc_z_calib = copy.acc_z_calib;
    acc_x = copy.acc_x;
    acc_y = copy.acc_y;
    acc_z = copy.acc_z;
    height = copy.height;
    height_reference = copy.height_reference;
    return *this;
  }
  virtual ~IMUCalcdata() 
  {
  }
  inline static std::string __s_getDataType() { return std::string("asctec_autopilot/IMUCalcdata"); }
  inline static std::string __s_getMD5Sum() { return std::string("e0e3f42a8742d7a0cc87047462b5e80d"); }
  inline static std::string __s_getMessageDefinition()
  {
    return std::string(
    "# angles derived by integration of gyro_outputs, drift compensated by data fusion; -90000..+90000 pitch(nick) and roll, 0..360000 yaw; 1000 = 1 degree\n"
    "\n"
    "int64 angle_roll\n"
    "int64 angle_pitch\n"
    "int64 angle_yaw\n"
    "\n"
    "# acc-sensor outputs, calibrated: -10000..+10000 = -1g..+1g\n"
    "\n"
    "int64 acc_x_calib\n"
    "int64 acc_y_calib\n"
    "int64 acc_z_calib\n"
    "\n"
    "# horizontal / vertical accelerations: -10000..+10000 = -1g..+1g\n"
    "\n"
    "int64 acc_x\n"
    "int64 acc_y\n"
    "int64 acc_z\n"
    "\n"
    "# height in mm (after data fusion)\n"
    "\n"
    "int64 height\n"
    "\n"
    "# height from sensor in mm\n"
    "\n"
    "int64 height_reference\n"
    "\n"
    "\n"
    "\n"
    );
  }
  inline virtual const std::string __getDataType() const { return __s_getDataType(); }
  inline virtual const std::string __getMD5Sum() const { return __s_getMD5Sum(); }
  inline virtual const std::string __getMessageDefinition() const { return __s_getMessageDefinition(); }
  inline uint32_t serializationLength() const
  {
    unsigned __l = 0;
    __l += 8; // angle_roll
    __l += 8; // angle_pitch
    __l += 8; // angle_yaw
    __l += 8; // acc_x_calib
    __l += 8; // acc_y_calib
    __l += 8; // acc_z_calib
    __l += 8; // acc_x
    __l += 8; // acc_y
    __l += 8; // acc_z
    __l += 8; // height
    __l += 8; // height_reference
    return __l;
  }
  virtual uint8_t *serialize(uint8_t *write_ptr,
#if defined(__GNUC__)
                             __attribute__((unused)) uint32_t seq) const
#else
                             uint32_t seq) const
#endif
  {
    SROS_SERIALIZE_PRIMITIVE(write_ptr, angle_roll);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, angle_pitch);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, angle_yaw);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, acc_x_calib);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, acc_y_calib);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, acc_z_calib);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, acc_x);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, acc_y);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, acc_z);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, height);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, height_reference);
    return write_ptr;
  }
  virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, angle_roll);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, angle_pitch);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, angle_yaw);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, acc_x_calib);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, acc_y_calib);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, acc_z_calib);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, acc_x);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, acc_y);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, acc_z);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, height);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, height_reference);
    return read_ptr;
  }
};

typedef boost::shared_ptr<IMUCalcdata> IMUCalcdataPtr;
typedef boost::shared_ptr<IMUCalcdata const> IMUCalcdataConstPtr;


}

#endif

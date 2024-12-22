// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Odometry.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Odometry.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define geometry_msgs_msg_TwistWithCovariance_max_cdr_typesize 336ULL;
#define geometry_msgs_msg_Vector3_max_cdr_typesize 24ULL;
#define geometry_msgs_msg_Pose_max_cdr_typesize 56ULL;
#define std_msgs_msg_Time_max_cdr_typesize 8ULL;
#define nav_msgs_msg_Odometry_max_cdr_typesize 1208ULL;
#define geometry_msgs_msg_Twist_max_cdr_typesize 48ULL;
#define geometry_msgs_msg_Point_max_cdr_typesize 24ULL;
#define geometry_msgs_msg_PoseWithCovariance_max_cdr_typesize 344ULL;
#define geometry_msgs_msg_Quaternion_max_cdr_typesize 32ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;
#define geometry_msgs_msg_TwistWithCovariance_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Vector3_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Pose_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Time_max_key_cdr_typesize 0ULL;
#define nav_msgs_msg_Odometry_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Twist_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Point_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_PoseWithCovariance_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Quaternion_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;

nav_msgs::msg::Odometry::Odometry()
{
    // std_msgs::msg::Header m_header

    // string m_child_frame_id
    m_child_frame_id ="";
    // geometry_msgs::msg::PoseWithCovariance m_pose

    // geometry_msgs::msg::TwistWithCovariance m_twist
}

nav_msgs::msg::Odometry::~Odometry()
{
}

nav_msgs::msg::Odometry::Odometry(
        const Odometry& x)
{
    m_header = x.m_header;
    m_child_frame_id = x.m_child_frame_id;
    m_pose = x.m_pose;
    m_twist = x.m_twist;
}

nav_msgs::msg::Odometry::Odometry(
        Odometry&& x) noexcept
{
    m_header = std::move(x.m_header);
    m_child_frame_id = std::move(x.m_child_frame_id);
    m_pose = std::move(x.m_pose);
    m_twist = std::move(x.m_twist);
}

nav_msgs::msg::Odometry& nav_msgs::msg::Odometry::operator =(
        const Odometry& x)
{
    // 将传入对象 x 的 m_header 成员复制到当前对象的 m_header 成员中
    m_header = x.m_header;

    // 将传入对象 x 的 m_child_frame_id 成员复制到当前对象的 m_child_frame_id 成员中
    m_child_frame_id = x.m_child_frame_id;

    // 将传入对象 x 的 m_pose 成员复制到当前对象的 m_pose 成员中
    m_pose = x.m_pose;

    // 将传入对象 x 的 m_twist 成员复制到当前对象的 m_twist 成员中
    m_twist = x.m_twist;

    // 返回当前对象的引用，支持链式赋值操作（例如 obj1 = obj2 = obj3）
    return *this;
}

// 重载赋值运算符（移动赋值），用于将一个右值类型的Odometry对象赋值给当前对象
// noexcept表示该函数不会抛出异常，保证了移动赋值操作的异常安全性
nav_msgs::msg::Odometry& nav_msgs::msg::Odometry::operator =(
        Odometry&& x) noexcept
{
// 将传入右值对象的头部信息通过移动语义赋值给当前对象的头部信息
    m_header = std::move(x.m_header);
// 将传入右值对象的子坐标系框架ID通过移动语义赋值给当前对象的对应成员
    m_child_frame_id = std::move(x.m_child_frame_id);
    // 将传入右值对象的位姿信息通过移动语义赋值给当前对象的对应成员
    m_pose = std::move(x.m_pose);
// 将传入右值对象的速度信息通过移动语义赋值给当前对象的对应成员
    m_twist = std::move(x.m_twist);
// 返回当前对象自身的引用，以支持连续赋值等操作，例如 a = b = c这种形式
    return *this;
}
// 重载相等比较运算符，用于比较当前的Odometry对象与另一个Odometry对象是否相等
// 参数x为要与之比较的另一个Odometry对象，const表示该函数不会修改当前对象以及传入的参数对象
bool nav_msgs::msg::Odometry::operator ==(
        const Odometry& x) const
{
 // 通过分别比较两个对象的头部信息、子坐标系框架ID、位姿信息、速度信息是否都相等
    // 来判断整个Odometry对象是否相等，只有所有这些成员都相等时才返回true，否则返回false
    return (m_header == x.m_header && m_child_frame_id == x.m_child_frame_id && m_pose == x.m_pose && m_twist == x.m_twist);
}
// 重载不等比较运算符，通过对相等比较运算符取反来实现
// 即如果当前对象与传入的对象不相等就返回true，相等则返回false
bool nav_msgs::msg::Odometry::operator !=(
        const Odometry& x) const
{
    return !(*this == x);
}
// 获取最大的CDR序列化大小（这里可能基于某种固定的类型相关的最大尺寸定义，从函数名推测）
// 参数current_alignment可能表示当前的对齐相关信息，但在函数体内暂时未使用（通过强制类型转换将其忽略）
size_t nav_msgs::msg::Odometry::getMaxCdrSerializedSize(
        size_t current_alignment)
{
 // 将current_alignment参数强制转换为void类型，相当于忽略这个参数的实际传入值，因为函数内暂时不用它
    static_cast<void>(current_alignment);
// 返回一个预定义的最大CDR类型尺寸（应该是基于nav_msgs_msg_Odometry类型相关的固定值）
    return nav_msgs_msg_Odometry_max_cdr_typesize;
}
// 获取给定Odometry对象的CDR序列化大小
// 参数data为要计算序列化大小的Odometry对象，current_alignment表示当前的对齐相关信息
size_t nav_msgs::msg::Odometry::getCdrSerializedSize(
        const nav_msgs::msg::Odometry& data,
        size_t current_alignment)
{
// 记录初始的对齐信息，后续用于计算相对于初始状态增加的序列化大小差值
    size_t initial_alignment = current_alignment;
 // 计算并更新当前对齐信息，增加头部信息序列化后的大小，通过调用std_msgs::msg::Header的相关函数来实现
    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
// 以下计算依次增加子坐标系框架ID、位姿、速度信息序列化后的大小
    // 4可能是用于表示字符串长度等相关的一些固定字节数（推测），这里先加上4字节，然后进行对齐操作
    // 再加上子坐标系框架ID字符串的实际长度以及一个结束符（这里推测'\0'占1字节）
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.child_frame_id().size() + 1;
// 增加位姿信息序列化后的大小，通过调用geometry_msgs::msg::PoseWithCovariance的相关函数来实现
    current_alignment += geometry_msgs::msg::PoseWithCovariance::getCdrSerializedSize(data.pose(), current_alignment);
// 增加速度信息序列化后的大小，通过调用geometry_msgs::msg::TwistWithCovariance的相关函数来实现
    current_alignment += geometry_msgs::msg::TwistWithCovariance::getCdrSerializedSize(data.twist(), current_alignment);
// 返回相对于初始对齐信息增加的序列化大小，即整个Odometry对象序列化后的大小
    return current_alignment - initial_alignment;
}
// 将当前的Odometry对象进行序列化，将其数据按照特定的CDR格式写入到给定的Cdr对象中
// 参数scdr为用于序列化操作的Cdr对象，const表示该函数不会修改当前的Odometry对象自身
void nav_msgs::msg::Odometry::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
// 将头部信息序列化到scdr对象中，按照相应的CDR序列化规则进行写入
    scdr << m_header;
// 将子坐标系框架ID字符串序列化到scdr对象中（这里先将C风格字符串传入，应该会按照对应的规则处理字符串内容）
    scdr << m_child_frame_id.c_str();
 // 将位姿信息序列化到scdr对象中
    scdr << m_pose;
// 将速度信息序列化到scdr对象中
    scdr << m_twist;
}
// 对给定的Cdr对象中的数据进行反序列化，将数据提取出来赋值给当前的Odometry对象成员
// 参数dcdr为包含要反序列化数据的Cdr对象
void nav_msgs::msg::Odometry::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
// 从dcdr对象中按照CDR反序列化规则读取头部信息并赋值给当前对象的头部成员
    dcdr >> m_header;
// 从dcdr对象中读取子坐标系框架ID并赋值给当前对象的对应成员
    dcdr >> m_child_frame_id;
// 从dcdr对象中读取位姿信息并赋值给当前对象的位姿成员
    dcdr >> m_pose;
 // 从dcdr对象中读取速度信息并赋值给当前对象的速度成员
    dcdr >> m_twist;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void nav_msgs::msg::Odometry::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void nav_msgs::msg::Odometry::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& nav_msgs::msg::Odometry::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& nav_msgs::msg::Odometry::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member child_frame_id
 * @param _child_frame_id New value to be copied in member child_frame_id
 */
void nav_msgs::msg::Odometry::child_frame_id(
        const std::string& _child_frame_id)
{
    m_child_frame_id = _child_frame_id;
}

/*!
 * @brief This function moves the value in member child_frame_id
 * @param _child_frame_id New value to be moved in member child_frame_id
 */
void nav_msgs::msg::Odometry::child_frame_id(
        std::string&& _child_frame_id)
{
    m_child_frame_id = std::move(_child_frame_id);
}

/*!
 * @brief This function returns a constant reference to member child_frame_id
 * @return Constant reference to member child_frame_id
 */
const std::string& nav_msgs::msg::Odometry::child_frame_id() const
{
    return m_child_frame_id;
}

/*!
 * @brief This function returns a reference to member child_frame_id
 * @return Reference to member child_frame_id
 */
std::string& nav_msgs::msg::Odometry::child_frame_id()
{
    return m_child_frame_id;
}

/*!
 * @brief This function copies the value in member pose
 * @param _pose New value to be copied in member pose
 */
void nav_msgs::msg::Odometry::pose(
        const geometry_msgs::msg::PoseWithCovariance& _pose)
{
    m_pose = _pose;
}

/*!
 * @brief This function moves the value in member pose
 * @param _pose New value to be moved in member pose
 */
void nav_msgs::msg::Odometry::pose(
        geometry_msgs::msg::PoseWithCovariance&& _pose)
{
    m_pose = std::move(_pose);
}

/*!
 * @brief This function returns a constant reference to member pose
 * @return Constant reference to member pose
 */
const geometry_msgs::msg::PoseWithCovariance& nav_msgs::msg::Odometry::pose() const
{
    return m_pose;
}

/*!
 * @brief This function returns a reference to member pose
 * @return Reference to member pose
 */
geometry_msgs::msg::PoseWithCovariance& nav_msgs::msg::Odometry::pose()
{
    return m_pose;
}

/*!
 * @brief This function copies the value in member twist
 * @param _twist New value to be copied in member twist
 */
void nav_msgs::msg::Odometry::twist(
        const geometry_msgs::msg::TwistWithCovariance& _twist)
{
    m_twist = _twist;
}

/*!
 * @brief This function moves the value in member twist
 * @param _twist New value to be moved in member twist
 */
void nav_msgs::msg::Odometry::twist(
        geometry_msgs::msg::TwistWithCovariance&& _twist)
{
    m_twist = std::move(_twist);
}

/*!
 * @brief This function returns a constant reference to member twist
 * @return Constant reference to member twist
 */
const geometry_msgs::msg::TwistWithCovariance& nav_msgs::msg::Odometry::twist() const
{
    return m_twist;
}

/*!
 * @brief This function returns a reference to member twist
 * @return Reference to member twist
 */
geometry_msgs::msg::TwistWithCovariance& nav_msgs::msg::Odometry::twist()
{
    return m_twist;
}
// 函数用于获取Odometry类型对象的键（Key）的最大CDR序列化大小。
// 参数current_alignment表示当前的对齐情况（可能用于序列化时字节对齐相关处理，但在此函数中暂未实际用到）。
size_t nav_msgs::msg::Odometry::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
 // 将传入的current_alignment参数强制转换为void类型，意味着在这个函数里忽略该参数，不进行基于它的任何操作。
    // 通常这么做是因为函数定义需要这个参数，但函数实现暂时不需要使用它的情况。
    static_cast<void>(current_alignment);
// 返回预先定义好的Odometry对象键的最大CDR类型尺寸，具体值应该由nav_msgs_msg_Odometry_max_key_cdr_typesize表示（其定义可能在别处）。
    return nav_msgs_msg_Odometry_max_key_cdr_typesize;
}
// 函数用于判断Odometry类型对象的键（Key）是否已被定义，返回一个布尔值来表示结果。
bool nav_msgs::msg::Odometry::isKeyDefined()
{
 // 直接返回false，表示默认情况下Odometry对象的键未被定义。
    // 具体是否符合实际需求，取决于该类型在整个系统中的设计和使用场景。
    return false;
}
// 函数用于对Odometry类型对象的键（Key）进行序列化操作，将键相关的数据按照CDR格式写入到给定的Cdr对象中。
// 参数scdr是一个eprosima::fastcdr::Cdr类型的对象，用于执行序列化相关的写入操作，const表示此函数不会修改调用它的Odometry对象本身。
void nav_msgs::msg::Odometry::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    // 将scdr参数强制转换为void类型，也就是忽略这个参数，意味着这个函数目前实际上并没有对传入的Cdr对象进行任何有效的写入操作。
    // 这可能是函数还未完全实现相关功能，或者在当前场景下不需要进行实际写入的一种占位写法。
    (void) scdr;
}

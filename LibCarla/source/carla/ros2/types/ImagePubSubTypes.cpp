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
 * @file ImagePubSubTypes.cpp
 * This header file contains the implementation of the serialization functions.
 *
 * This file was generated by the tool fastcdrgen.
 */

#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

#include "ImagePubSubTypes.h"
// 定义序列化负载类型和实例句柄类型
using SerializedPayload_t = eprosima::fastrtps::rtps::SerializedPayload_t;
using InstanceHandle_t = eprosima::fastrtps::rtps::InstanceHandle_t;

namespace sensor_msgs {
    namespace msg {
        ImagePubSubType::ImagePubSubType()
        {
            setName("sensor_msgs::msg::dds_::Image_"); 
            auto type_size = Image::getMaxCdrSerializedSize(); // 获取Image类型的最大CDR序列化大小
            type_size += eprosima::fastcdr::Cdr::alignment(type_size, 4); /* possible submessage alignment */ // 计算可能的子消息对齐
            m_typeSize = static_cast<uint32_t>(type_size) + 4; /*encapsulation*/ // 设置类型大小（包括封装）
            m_isGetKeyDefined = Image::isKeyDefined(); // 设置是否定义了键
            size_t keyLength = Image::getKeyMaxCdrSerializedSize() > 16 ? // 计算键缓冲区长度
                    Image::getKeyMaxCdrSerializedSize() : 16;
            m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength)); // 分配键缓冲区
            memset(m_keyBuffer, 0, keyLength); // 初始化键缓冲区
        }

        ImagePubSubType::~ImagePubSubType() // ImagePubSubType析构函数
        {
            if (m_keyBuffer != nullptr)
            {
                free(m_keyBuffer);
            }
        }

        bool ImagePubSubType::serialize(
                void* data,
                SerializedPayload_t* payload)
        {
            Image* p_type = static_cast<Image*>(data);

            // Object that manages the raw buffer.
            eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size); // 创建FastBuffer对象管理原始缓冲区
            // Object that serializes the data.
            eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR); // 创建Cdr对象序列化数据
            payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
            // Serialize encapsulation
            ser.serialize_encapsulation();
            p_type->serialize(ser);
            // Get the serialized length
            payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
            return true;
        }

        bool ImagePubSubType::deserialize(
                SerializedPayload_t* payload,
                void* data)
        {
            //Convert DATA to pointer of your type
            Image* p_type = static_cast<Image*>(data); // 将void指针转换为Image指针

            // Object that manages the raw buffer.
            eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->length); // 创建FastBuffer对象管理原始缓冲区

            // Object that deserializes the data.
            eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR); // 创建Cdr对象反序列化数据

            // Deserialize encapsulation.
            deser.read_encapsulation(); // 反序列化封装
            payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

            // Deserialize the object.
            p_type->deserialize(deser);
            return true;
        }

        std::function<uint32_t()> ImagePubSubType::getSerializedSizeProvider(
                void* data)
        {
            return [data]() -> uint32_t
                   {
                       return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<Image*>(data))) +
                              4u /*encapsulation*/;
                   };
        }

        void* ImagePubSubType::createData()
        {
            return reinterpret_cast<void*>(new Image());
        }

        void ImagePubSubType::deleteData(
                void* data)
        {
            delete(reinterpret_cast<Image*>(data));
        }

        bool ImagePubSubType::getKey(
                void* data,
                InstanceHandle_t* handle,
                bool force_md5)
        {
            if (!m_isGetKeyDefined) // 如果没有定义获取键，则返回false
            {
                return false;
            }

            Image* p_type = static_cast<Image*>(data);

            // Object that manages the raw buffer.
            eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
                    Image::getKeyMaxCdrSerializedSize()); // 将void指针转换为Image指针

            // Object that serializes the data.
            eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS); // 创建Cdr对象序列化数据
            p_type->serializeKey(ser); // 序列化Image对象的键
            if (force_md5 || Image::getKeyMaxCdrSerializedSize() > 16) // 如果需要强制MD5或键大小大于16，则计算MD5
            {
                m_md5.init();
                m_md5.update(m_keyBuffer, static_cast<unsigned int>(ser.getSerializedDataLength()));
                m_md5.finalize();
                for (uint8_t i = 0; i < 16; ++i)
                {
                    handle->value[i] = m_md5.digest[i];
                }
            }
            else // 否则直接复制键缓冲区到句柄
            {
                for (uint8_t i = 0; i < 16; ++i)
                {
                    handle->value[i] = m_keyBuffer[i];
                }
            }
            return true;
        }
    } //End of namespace msg
} //End of namespace sensor_msgs

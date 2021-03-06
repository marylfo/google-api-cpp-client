// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Generated from:
//   Version: v3
//   Revision: 20170507
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_CALENDAR_API_LAUNCH_INFO_H_
#define  GOOGLE_CALENDAR_API_LAUNCH_INFO_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_calendar_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class LaunchInfo : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LaunchInfo* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LaunchInfo(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LaunchInfo(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LaunchInfo();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::LaunchInfo</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_calendar_api::LaunchInfo");
  }

  /**
   * Determine if the '<code>appId</code>' attribute was set.
   *
   * @return true if the '<code>appId</code>' attribute was set.
   */
  bool has_app_id() const {
    return Storage().isMember("appId");
  }

  /**
   * Clears the '<code>appId</code>' attribute.
   */
  void clear_app_id() {
    MutableStorage()->removeMember("appId");
  }


  /**
   * Get the value of the '<code>appId</code>' attribute.
   */
  const StringPiece get_app_id() const {
    const Json::Value& v = Storage("appId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>appId</code>' attribute.
   * @param[in] value The new value.
   */
  void set_app_id(const StringPiece& value) {
    *MutableStorage("appId") = value.data();
  }

  /**
   * Determine if the '<code>installUrl</code>' attribute was set.
   *
   * @return true if the '<code>installUrl</code>' attribute was set.
   */
  bool has_install_url() const {
    return Storage().isMember("installUrl");
  }

  /**
   * Clears the '<code>installUrl</code>' attribute.
   */
  void clear_install_url() {
    MutableStorage()->removeMember("installUrl");
  }


  /**
   * Get the value of the '<code>installUrl</code>' attribute.
   */
  const StringPiece get_install_url() const {
    const Json::Value& v = Storage("installUrl");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>installUrl</code>' attribute.
   * @param[in] value The new value.
   */
  void set_install_url(const StringPiece& value) {
    *MutableStorage("installUrl") = value.data();
  }

  /**
   * Determine if the '<code>intentAction</code>' attribute was set.
   *
   * @return true if the '<code>intentAction</code>' attribute was set.
   */
  bool has_intent_action() const {
    return Storage().isMember("intentAction");
  }

  /**
   * Clears the '<code>intentAction</code>' attribute.
   */
  void clear_intent_action() {
    MutableStorage()->removeMember("intentAction");
  }


  /**
   * Get the value of the '<code>intentAction</code>' attribute.
   */
  const StringPiece get_intent_action() const {
    const Json::Value& v = Storage("intentAction");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>intentAction</code>' attribute.
   * @param[in] value The new value.
   */
  void set_intent_action(const StringPiece& value) {
    *MutableStorage("intentAction") = value.data();
  }

  /**
   * Determine if the '<code>uri</code>' attribute was set.
   *
   * @return true if the '<code>uri</code>' attribute was set.
   */
  bool has_uri() const {
    return Storage().isMember("uri");
  }

  /**
   * Clears the '<code>uri</code>' attribute.
   */
  void clear_uri() {
    MutableStorage()->removeMember("uri");
  }


  /**
   * Get the value of the '<code>uri</code>' attribute.
   */
  const StringPiece get_uri() const {
    const Json::Value& v = Storage("uri");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>uri</code>' attribute.
   * @param[in] value The new value.
   */
  void set_uri(const StringPiece& value) {
    *MutableStorage("uri") = value.data();
  }

 private:
  void operator=(const LaunchInfo&);
};  // LaunchInfo
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_LAUNCH_INFO_H_

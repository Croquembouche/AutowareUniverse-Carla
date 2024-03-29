cmake_minimum_required(VERSION 3.8)
project(v2x_msg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MAP.msg"
  "msg/BSM.msg"
  "msg/CSR.msg"
  "msg/EVA.msg"
  "msg/ICA.msg"
  "msg/NMEA.msg"
  "msg/PDM.msg"
  "msg/PSM.msg"
  "msg/PVD.msg"
  "msg/RSA.msg"
  "msg/RTCM.msg"
  "msg/SPAT.msg"
  "msg/SRM.msg"
  "msg/SSM.msg"
  "msg/TIM.msg"
  "msg/Latency.msg"
  "msg/AccelerationSet4Way.msg"
  "msg/AccelSets.msg"
  "msg/AccelSteerYawRateConfidence.msg"
  "msg/AdvisorySpeed.msg"
  "msg/AllowedManeuvers.msg"
  "msg/AntennaOffsetSet.msg"
  "msg/ApproachOrLane.msg"
  "msg/Area.msg"
  "msg/AxleWeight.msg"
  "msg/BrakeSystemStatus.msg"
  "msg/BSMCoreData.msg"
  "msg/BumperHeights.msg"
  "msg/Circle.msg"
  "msg/ComputedLane.msg"
  "msg/ConfidenceSet.msg"
  "msg/ConnectingLane.msg"
  "msg/Connection.msg"
  "msg/ConnectionManeuverAssist.msg"
  "msg/Content.msg"
  "msg/DataParameters.msg"
  "msg/DDateTime.msg"
  "msg/Description.msg"
  "msg/EmergencyDetails.msg"
  "msg/ExitService.msg"
  "msg/ExitServicecontent.msg"
  "msg/FullPositionVector.msg"
  "msg/GenericLane.msg"
  "msg/GenericSignage.msg"
  "msg/GenericSignagecontent.msg"
  "msg/GeographicalPath.msg"
  "msg/GeometricProjection.msg"
  "msg/IntersectionAccessPoint.msg"
  "msg/IntersectionGeometry.msg"
  "msg/IntersectionReferenceID.msg"
  "msg/IntersectionState.msg"
  "msg/IntersectionStatusObject.msg"
  "msg/ITIScodesandtext.msg"
  "msg/ITIScodesandtextcontent.msg"
  "msg/ITISSpeedLimit.msg"
  "msg/ITISSpeedLimitcontent.msg"
  "msg/J1939data.msg"
  "msg/LaneAttributes.msg"
  "msg/LaneDataAttribute.msg"
  "msg/LaneID.msg"
  "msg/MovementEvent.msg"
  "msg/MovementState.msg"
  "msg/MsgID.msg"
  "msg/NodeAttributeSetXY.msg"
  "msg/NodeAttributeSetLL.msg"
  "msg/NodeListXY.msg"
  "msg/Nodellmd64b.msg"
  "msg/NodeOffsetPointLL.msg"
  "msg/NodeOffsetPointXY.msg"
  "msg/NodeLL.msg"
  "msg/NodeLL24B.msg"
  "msg/NodeLL28B.msg"
  "msg/NodeLL32B.msg"
  "msg/NodeLL36B.msg"
  "msg/NodeLL44B.msg"
  "msg/NodeLL48B.msg"
  "msg/NodeXY.msg"
  "msg/NodeXY20b.msg"
  "msg/NodeXY22b.msg"
  "msg/NodeXY24b.msg"
  "msg/NodeXY26b.msg"
  "msg/NodeXY28b.msg"
  "msg/NodeXY32b.msg"
  "msg/Object.msg"
  "msg/Offset.msg"
  "msg/OffsetSystem.msg"
  "msg/OffsetXaxis.msg"
  "msg/OffsetYaxis.msg"
  "msg/PathHistory.msg"
  "msg/PathHistoryPoint.msg"
  "msg/PathPrediction.msg"
  "msg/Position3D.msg"
  "msg/PositionalAccuracy.msg"
  "msg/PositionConfidenceSet.msg"
  "msg/PrivilegedEvents.msg"
  "msg/PropelledInformation.msg"
  "msg/RegionOffsets.msg"
  "msg/RegionPointSet.msg"
  "msg/RequestedItem.msg"
  "msg/RequestorDescription.msg"
  "msg/RequestorPositionVector.msg"
  "msg/RequestorType.msg"
  "msg/RestrictionClassAssignment.msg"
  "msg/RestrictionUserType.msg"
  "msg/RoadSegment.msg"
  "msg/RoadSegmentReferenceID.msg"
  "msg/RoadSignID.msg"
  "msg/RTCMheader.msg"
  "msg/Sample.msg"
  "msg/ShapePointSet.msg"
  "msg/SignalRequest.msg"
  "msg/SignalRequesterInfo.msg"
  "msg/SignalRequestPackage.msg"
  "msg/SignalStatus.msg"
  "msg/SignalStatusPackage.msg"
  "msg/Snapshot.msg"
  "msg/SnapshotDistance.msg"
  "msg/SnapshotTime.msg"
  "msg/SpeedandHeadingandThrottleConfidence.msg"
  "msg/SpeedLimit.msg"
  "msg/Steering.msg"
  "msg/TimeChangeDetails.msg"
  "msg/TireData.msg"
  "msg/TransitVehicleStatus.msg"
  "msg/TransmissionAndSpeed.msg"
  "msg/TravelerDataFrame.msg"
  "msg/ValidRegion.msg"
  "msg/VehicleClass.msg"
  "msg/VehicleClassification.msg"
  "msg/VehicleData.msg"
  "msg/VehicleID.msg"
  "msg/VehicleIdent.msg"
  "msg/VehicleSafetyExtensions.msg"
  "msg/VehicleSize.msg"
  "msg/VehicleStatus.msg"
  "msg/VehicleStatusRequest.msg"
  "msg/WeatherReport.msg"
  "msg/WiperSet.msg"
  "msg/WorkZone.msg"
  "msg/WorkZonecontent.msg"
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()
ament_export_dependencies(rosidl_default_runtime)

ament_package()

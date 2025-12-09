
"use strict";

let BalesNumInCamera = require('./BalesNumInCamera.js')
let PositionTask = require('./PositionTask.js')
let StopTask = require('./StopTask.js')
let GetTargetPose = require('./GetTargetPose.js')
let cloud_order = require('./cloud_order.js')
let EmergencyStopTask = require('./EmergencyStopTask.js')
let CameraTask = require('./CameraTask.js')
let FusionDetTask = require('./FusionDetTask.js')
let ControlTask = require('./ControlTask.js')
let GetInitPose = require('./GetInitPose.js')
let TaskSts = require('./TaskSts.js')
let PlanTask = require('./PlanTask.js')

module.exports = {
  BalesNumInCamera: BalesNumInCamera,
  PositionTask: PositionTask,
  StopTask: StopTask,
  GetTargetPose: GetTargetPose,
  cloud_order: cloud_order,
  EmergencyStopTask: EmergencyStopTask,
  CameraTask: CameraTask,
  FusionDetTask: FusionDetTask,
  ControlTask: ControlTask,
  GetInitPose: GetInitPose,
  TaskSts: TaskSts,
  PlanTask: PlanTask,
};

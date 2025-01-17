// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>

class SubShooter : public frc2::SubsystemBase {
 public:
  static SubShooter& GetInstance() {static SubShooter inst; return inst;}
  SubShooter();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;
  void StartSpinning();
  void StopSpinning();

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  rev::CANSparkMax _shooterMotor{1, rev::CANSparkMaxLowLevel::MotorType::kBrushless};
};

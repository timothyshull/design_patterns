# Chapter 1
- classes
    - Sensor.c
    - Sensor.h
    - sensor_main.c
- polymorphism and virtual functions
    - polymoprhism.c
- subclassing
    - Queue.h
    - Queue.c
    - queue_main.c
    - CachedQueue.h
    - CachedQueue.c
- finite state machines
    - SecuritySupervisor.c

# Chapter 2
- observer
    - ECGPkg.h
    - ECGPkg.c
    - TMDQueue.h
    - TMDQueue.c
    - ECG_Module.h
    - ECG_Module.c
    - HistogramDisplay.h
    - HistogramDisplay.c
    - TestBuilder.h
    - TestBuilder.c
    - ecg_main.c
    - TMDQueue_observer.h
    - TMDQueue_observer.c
    - NotificationHandle.h
    - NotificationHandle.c

- Code Listing 2-1: ECGPkg.h Header File
- Code Listing 2-5: TMDQueue.c Implementation File
- Code Listing 2-6: ECG_Module.c
- Code Listing 2-7: HistogramDisplay.c Implementation File
- Code Listing 2-8: TestBuilder.h Header File
- Code Listing 2-9: TestBuilder.c Implementation File
- Code Listing 2-10: Sample main.c
- Code Listing 2-13: NotificationHandle.h Header File
- Code Listing 2-14: NotificationHandle.c Implementation File
- Code Listing 2-15: HistogramDisplay.c Implementation File with Observer Pattern



# Chapter 3
- Hardware Proxy Pattern – Encapsulate the hardware into a class or struct
- Hardware Adapter Pattern – Adapt between a required and a provided interface
- Mediator Pattern – Coordinate complex interactions
- Observer Pattern – Support efficient sensor data distribition
- Debouncing Pattern – Reject intermittent hardware signals
- Interrupt Pattern – Handle high-ugency hardware signals
- Polling Pattern – Periodically check for new sensor data

- Code Listing 3-3: HardwareProxyExample.h
- Code Listing 3-4: MotorData.h
- Code Listing 3-5: MotorProxy.h
- Code Listing 3-6: MotorProxy.c
- Code Listing 3-7: AcmeO2Adapter.c
- Code Listing 3-8: UltimateO2Adapter.c
- Code Listing 3-9: RobotArmManager.h
- Code Listing 3-10: RobotArmManager.c
- Code Listing 3-11: GasSensor.h
- Code Listing 3-12: GasSensor.c
- Code Listing 3-13: DisplayClient.h
- Code Listing 3-14: DisplayClient.c
- Code Listing 3-15: GasData.h
- Code Listing 3-16: GasData.c
- Code Listing 3-18: ButtonDriver.h
- Code Listing 3-19: ButtonDriver.c
- Code Listing 3-23: BCPeriodicPoller.h
- Code Listing 3-24: BCPeriodicPoller.c

# Chapter 4
- Cyclic Executive Pattern – Schedule threads in an infinite loop
- Static Priority Pattern – Schedule threads by priority
- Critical Region Pattern – Protect resources by disabling task switching
- Guarded Call Pattern – Protect resources through mutex semaphores
- Queuing Pattern – Serialize access through queuing messages
- Rendezvous Pattern – Coordinate complex task synchronization
- Simultaneous Locking Pattern – Avoid deadlock by locking resources together
- Ordered Locking Pattern – Avoid deadlock by locking resources only in specific orders

- Code Listing 4-2: MotorPositionSensor.c
- Code Listing 4-3: GasControlExecutive.c
- Code Listing 4-3: MotorDisplay.h
- Code Listing 4-4: MotorDisplay.c
- Code Listing 4-4: SharedData.h
- Code Listing 4-5: MotorController.h
- Code Listing 4-5: SharedData.c
- Code Listing 4-6: CRRobotArmManager.h
- Code Listing 4-6: GasDisplayThread.c 4.3 Static Priority Pattern
- Code Listing 4-7: GuardedCallExample.h
- Code Listing 4-7: Static Priority Example main.c
- Code Listing 4-8: MontorPositionSensor.h
- Code Listing 4-8: Position.c
- Code Listing 4-9: Attitude.h
- Code Listing 4-10: Attitude.c
- Code Listing 4-11: KinematicData.h
- Code Listing 4-12: AttitudeController.h
- Code Listing 4-13: AttitudeController.c
- Code Listing 4-13: MotorController.c
- Code Listing 4-14: MotorData.h
- Code Listing 4-14: Navigator.h
- Code Listing 4-15: MotorData.c
- Code Listing 4-15: Navigator.c
- Code Listing 4-16: FlightDataDisplay.h
- Code Listing 4-17: CRRobotArmManager.c
- Code Listing 4-17: GasDataExample.h
- Code Listing 4-18: GasController.c
- Code Listing 4-19: GasDisplay.h
- Code Listing 4-19: Position.h
- Code Listing 4-20: ThreadBarrier.h
- Code Listing 4-21: ThreadBarrier.c
- Code Listing 4-22: SensorMaster.h
- Code Listing 4-23: SensorMaster.c
- Code Listing 4-24: KinematicData.c
- Code Listing 4-24: VelocitySensor.h
- Code Listing 4-30: FlightDataDisplay.c
- Code Listing 4-32: GasData.h
- Code Listing 4-33: GasData.c
- Code Listing 4-34: GasDataQueue.h
- Code Listing 4-35: GasDataQueue.c
- Code Listing 4-36: SensorThread.h
- Code Listing 4-37: updateData function of SensorThread.c
- Code Listing 4-38: O2Sensor.h
- Code Listing 4-39: O2Sensor.c
- Code Listing 4-40: GasController.h
- Code Listing 4-43: GasDisplay.c
- Code Listing 4-49 has the corresponding C code.
- Code Listing 4-49: VelocitySensor.c
- Code Listing 4-50: ResourceList.h
- Code Listing 4-51: ResourceList.c

# Chapter 5
- Single Event Receptor Pattern – Implement state machines with a single event receptor
- Multiple Event Receptor Pattern – Implement state machines with many event receptors
- State Table Pattern – Implement a table-driven state machine
- State Design Pattern – Implement state machines with creation of state objects
- Decomposed And-State Pattern – Implement and-states through the decomposition of the composite state

- Code Listing 5-6: TokenizeAsyncSinglePkg.h
- Code Listing 5-7: TSREventQueue.h
- Code Listing 5-8: TSREventQueue.c
- Code Listing 5-9: TSRSyncSingleReceptor.h
- Code Listing 5-10: TSRSyncSingleReceptor.c 5.4 Multiple Event Receptor Pattern
- Code Listing 5-12: TokenizeMultiReceptor.h
- Code Listing 5-13:TokenizeMultiReceptor.c 5.5 State Table Pattern
- Code Listing 5-14: StateTablePattern.h
- Code Listing 5-15: TokenizerStateTable.h
- Code Listing 5-16: TokenizerStateTable.c
- Code Listing 5-17: StatePattern.h
- Code Listing 5-18: Context.h
- Code Listing 5-19: Context.c
- Code Listing 5-20: StateActionSet.h
- Code Listing 5-21: StateActionSet.c
- Code Listing 5-22: NoNumberState.h
- Code Listing 5-23: NoNumberState.c
- Code Listing 5-24: GN_ProcessingWholeState.h
- Code Listing 5-25: GN_ProcessingWholeState.c
- Code Listing 5-26: GN_ProcessingFractionState.h
- Code Listing 5-27: GN_ProcessingFractionState.c
- Code Listing 5-28: LightPkg.h
- Code Listing 5-29: LightController.h
- Code Listing 5-30: LightController.c
- Code Listing 5-31: AndStateList.h
- Code Listing 5-32: AndStateList.c
- Code Listing 5-35: ErrorStateClass.h
- Code Listing 5-36: ErrorState.c
- Code Listing 5-37: ModeStateClass.h
- Code Listing 5-38: ModeStateClass.c

# Chapter 6
- One’s Complement Pattern – Adds a bitwise inverted copy of primitive data elements to identify when data is corrupted in vivo
- CRC Pattern – Adds a cyclic redundancy check to identify when bits of the data have been corrupted in vivo
- Smart Data Pattern – Adds behavior to the data to ensure that the data’s preconditions and constraints are adhered to
- Channel Pattern – Arranges the processing of sensory data as a series of transformational steps to provide a unit of large-scale redundancy
- Protected Single Channel Pattern – Elaborates the channel pattern by adding data and proces- sing validation checks at various points within the single channel
- Dual Channel Pattern – Creates multiple channels to aid in the identification of errors and failures and, optionally, allows continuation of service in the presence of such as fault

- Code Listing 6-1: OwnShipAttitude.h
- Code Listing 6-2: OwnShipAttitude.c
- Code Listing 6-3: CRCCalculator.c
- Code Listing 6-4: CRCExample.c
- Code Listing 6-5: PatientData.h
- Code Listing 6-6: PatientData.c
- Code Listing 6-7: SmartDataExample.h
- Code Listing 6-8: SmartInt.h
- Code Listing 6-9: SmartInt.c
- Code Listing 6-10: SmartColor.h
- Code Listing 6-11: SmartColor.c
- Code Listing 6-12: PatientDataClass.h
- Code Listing 6-13: PatientDataClass.c
- Code Listing 6-14: EMGChannel.h
- Code Listing 6-15: EMGChannel.c
- Code Listing 6-16: Thermostat.h
- Code Listing 6-17: Thermostat.c
- Code Listing 6-18: CheckTemperature.h
- Code Listing 6-19: CheckTemperature.c
- Code Listing 6-20: Thermometer.h
- Code Listing 6-21: Thermometer.c
- Code Listing 21: ButtonHandler.h
- Code Listing 22: ButtonHandler.c
- Code Listing 33: StateActionSet.h
- Code Listing 34: StateActionSet.c








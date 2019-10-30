# StatePattern

## General establishment
1. I'm looking for the way to use State Pattern without dynamic memory allocation. It's important for compliance with MISRA standard.
2. State machine should be safe. It can't allow to change state accidentialy. 

## Program description
The passes between states are only allowed on way shown on diagram. 

![](StateMachine.png)

## Console output 

`Illegal state transition from Idle to Idle`
    `IdleState.myRun`
    `IdleState.myEnd`
`Changing from Idle to Standby state`
    `StandbyState.myBegin`
    `StandbyState.myRun`
`Illegal state transition from Standby to Freezing`
    `StandbyState.myRun`
    `StandbyState.myEnd`
`Changing from Standby to Ready state`
    `ReadyState.myBegin`
    `ReadyState.myRun`
    `ReadyState.myEnd`
`Changing from Ready to Freezing state`
    `FreezingState.myBegin`
    `FreezingState.myRun`
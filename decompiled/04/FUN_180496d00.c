// FUN_180496d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180496d00 */

void FUN_180496d00(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = (undefined1  [16])0x0;
  FUN_180485630(&local_58,param_2,0,param_4,0x436e0000,0x425d70a4,"MOVEMENT",10);
  FUN_180486500(&local_58,"Bunny Hop",param_3 + 0x6970);
  FUN_180499200(&local_58);
  FUN_180499650(&local_58);
  FUN_180486500(&local_58,"No Fall Damage",param_3 + 0x6989);
  FUN_180486500(&local_58,"Standalone Quick Stop",param_3 + 0x698a);
  FUN_180486500(&local_58,"Strafe Assist",param_3 + 0x698b);
  FUN_180486500(&local_58,"Edge Jump",param_3 + 0x698c);
  FUN_180499aa0(&local_58);
  FUN_180486500(&local_58,"Fast Ladder",param_3 + 0x6995);
  FUN_180486500(&local_58,"Air Duck",param_3 + 0x6996);
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  }
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = (undefined1  [16])0x0;
  FUN_180485630(&local_58,param_2,1);
  FUN_180486500(&local_58,"Quick Switch",param_3 + 0x6997);
  FUN_180486500(&local_58,"Super Toss",param_3 + 0x6998);
  FUN_180499ef0(&local_58);
  FUN_180486500(&local_58,"Prevent AFK Kick",param_3 + 0x699a);
  FUN_18049a2f0(&local_58);
  FUN_18049a740(&local_58);
  FUN_18049ab90(&local_58);
  FUN_180486500(&local_58,"Auto-Accept Matchmaking",param_3 + 0x69bc);
  FUN_180486b50(&local_58);
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  }
  return;
}




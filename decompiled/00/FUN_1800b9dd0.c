// FUN_1800b9dd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b9dd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1800b9dd0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  char *local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  char *local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_1800b6650(&DAT_180c7e1f0);
  FUN_1800b8850(&DAT_180c8fdb8);
  DAT_180cad2e0 = 0;
  local_c8 = "selected mode";
  uStack_c0 = 0xd;
  local_e8 = "combat";
  uStack_e0 = 6;
  FUN_1800f3030(&DAT_180cad2e0,&local_e8,&local_c8);
  DAT_180cad2e4 = 0;
  local_e8 = "mode cycle key";
  uStack_e0 = 0xe;
  local_c8 = "combat";
  uStack_c0 = 6;
  FUN_1800f3030(&DAT_180cad2e4,&local_c8,&local_e8);
  FUN_18063ab10(&DAT_180cad2e8,0,0x908);
  FUN_1800b5050(&DAT_180cad2e8);
  local_a8 = (undefined1  [16])0x0;
  local_98 = 0;
  local_90 = 0;
  FUN_18015ba30(local_a8,"pen crosshair",0xd);
  local_88 = (undefined1  [16])0x0;
  local_78 = 0;
  local_70 = 0;
  FUN_18015ba30(local_88,"penetration crosshair",0x15);
  local_e8 = (char *)0x0;
  uStack_e0 = uStack_e0 & 0xffffffffffffff00;
  local_d8 = 0;
  local_c8 = (char *)0x0;
  uStack_c0 = uStack_e0;
  local_b8 = 0;
  FUN_18015a8b0(&DAT_180cadbf0,0,&local_c8,local_88,local_a8,0);
  DAT_180cadc58 = 0x40400000;
  local_e8 = "size";
  uStack_e0 = 4;
  local_c8 = "pen crosshair";
  uStack_c0 = 0xd;
  FUN_1800f2e80(&DAT_180cadc58,&local_c8,&local_e8);
  uVar2 = 0x3f800000;
  DAT_180cadc5c = 0x3f800000;
  local_e8 = "outline";
  uStack_e0 = 7;
  local_c8 = "pen crosshair";
  uStack_c0 = 0xd;
  FUN_1800f2e80(&DAT_180cadc5c,&local_c8,&local_e8);
  _DAT_180cadc60 = 0xb4eeeeee;
  local_e8 = "can penetrate fill";
  uStack_e0 = 0x12;
  local_c8 = "pen crosshair";
  uStack_c0 = 0xd;
  FUN_1800aa4b0(&DAT_180cadc60,&local_c8,&local_e8);
  _DAT_180cadc64 = 0xe6ffffff;
  local_e8 = "can penetrate outline";
  uStack_e0 = 0x15;
  local_c8 = "pen crosshair";
  uStack_c0 = 0xd;
  FUN_1800aa4b0(&DAT_180cadc64,&local_c8,&local_e8);
  DAT_180cadc68 = 0xa0505050;
  local_e8 = "blocked fill";
  uStack_e0 = 0xc;
  local_c8 = "pen crosshair";
  uStack_c0 = 0xd;
  FUN_1800aa4b0(&DAT_180cadc68,&local_c8,&local_e8);
  DAT_180cadc6c = 0xe6a0a0a0;
  local_e8 = "blocked outline";
  uStack_e0 = 0xf;
  local_c8 = "pen crosshair";
  uStack_c0 = 0xd;
  FUN_1800aa4b0(&DAT_180cadc6c,&local_c8,&local_e8);
  local_68 = (undefined1  [16])0x0;
  local_58 = 0;
  local_50 = 0;
  FUN_18015ba30(local_68,"pen crosshair",0xd);
  local_48 = (undefined1  [16])0x0;
  local_38 = 0;
  local_30 = 0;
  FUN_18015ba30(local_48,&DAT_1806bd1f0,4);
  local_e8 = (char *)0x0;
  uStack_e0 = uStack_e0 & 0xffffffffffffff00;
  local_d8 = 0;
  local_c8 = (char *)0x0;
  uStack_c0 = uStack_e0;
  local_b8 = 0;
  FUN_18015a8b0(&DAT_180cadc70,1,&local_c8,local_48,local_68,0);
  local_e8 = "glow strength";
  uStack_e0 = 0xd;
  local_c8 = "pen crosshair";
  uStack_c0 = 0xd;
  DAT_180cadcd8 = uVar2;
  FUN_1800f2e80(&DAT_180cadcd8,&local_c8,&local_e8);
  lVar1 = FUN_1800aa200();
  *(code **)(lVar1 + 0x38) = FUN_1800d6b40;
  *(code **)(lVar1 + 0x40) = FUN_1800e1d10;
  *(code **)(lVar1 + 0x48) = FUN_1800e3790;
  return &DAT_180c7e1f0;
}




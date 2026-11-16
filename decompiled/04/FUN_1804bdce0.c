// FUN_1804bdce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bdce0 */

void FUN_1804bdce0(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  undefined1 auVar9 [64];
  float fVar10;
  undefined1 auVar11 [64];
  float fVar12;
  float local_res8;
  float local_resc;
  undefined1 local_48 [12];
  float fStack_3c;
  
  lVar3 = DAT_180bb8ae8;
  auVar11 = ZEXT464(*(uint *)(param_1 + 100));
  auVar1 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xe18);
  auVar2 = vshufps_avx(auVar1,auVar1,0xff);
  local_48 = auVar1._0_12_;
  fStack_3c = auVar2._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
  uVar4 = FUN_1804b1120(local_48);
  fVar12 = 0.0;
  if (0.0 < auVar11._0_4_) {
    if ((*(byte *)(param_1 + 0x14) & 0x80) == 0) {
      local_res8 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30);
      local_resc = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x34);
      FUN_1804de7c0(*(undefined8 *)(param_1 + 0x2c8),(float *)(param_1 + 0x28),&local_res8,uVar4,
                    *(undefined4 *)(param_1 + 0x60),auVar11._0_4_,0);
    }
    else {
      if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
        FUN_1804bdae0(param_1,1,uVar4,auVar11._0_8_);
      }
      if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
        FUN_1804bdae0(param_1,3,uVar4,auVar11._0_8_);
      }
    }
  }
  fVar10 = auVar11._0_4_;
  if (*(char *)(param_1 + 0xd8) == -1) {
    if (*(char *)(param_1 + 0xd9) == -1) goto LAB_1804bde87;
    cVar7 = *(char *)(param_1 + 0xd9);
    cVar8 = cVar7;
  }
  else {
    cVar7 = *(char *)(param_1 + 0xd9);
    cVar8 = cVar7;
    if (cVar7 == -1) {
      cVar8 = *(char *)(param_1 + 0xd8);
    }
  }
  auVar1 = vmaxss_avx(SUB6416(ZEXT464(0x40000000),0),ZEXT416(*(uint *)(param_1 + 100)));
  auVar9 = ZEXT1664(auVar1);
  lVar6 = 800;
  if (cVar7 != -1) {
    lVar6 = 0x330;
  }
  auVar1 = *(undefined1 (*) [16])(lVar6 + 0xc78 + DAT_180bb8ae8);
  auVar2 = vshufps_avx(auVar1,auVar1,0xff);
  local_48 = auVar1._0_12_;
  fStack_3c = auVar2._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
  uVar5 = FUN_1804b1120(local_48,SUB648(ZEXT464(0x40000000),0),0x330,cVar8);
  FUN_1804bdae0(param_1,(int)cVar8,uVar5,auVar9._0_8_);
  fVar10 = auVar11._0_4_;
LAB_1804bde87:
  if ((fVar12 < *(float *)(lVar3 + 0xcd0)) && ((*(byte *)(param_1 + 0x14) & 1) == 0)) {
    FUN_1804dcfb0(*(undefined8 *)(param_1 + 0x2c8),*(float *)(param_1 + 0x28) + fVar10,
                  (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30)) - fVar10,
                  (*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x2c)) - 1.0,uVar4,
                  *(float *)(lVar3 + 0xcd0),0x60000);
  }
  return;
}




// FUN_1800e6880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6880 */

ulonglong FUN_1800e6880(char *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_res8 [4];
  undefined1 local_68 [32];
  undefined1 local_48 [72];
  
  cVar1 = *param_1;
  switch(cVar1) {
  default:
    local_res8[0] = FUN_180112a50();
    uVar6 = FUN_1800f6bd0(local_68,"type must be number, but is ",local_res8);
    FUN_1800f6ca0(local_48,0x12e,uVar6);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d1050);
  case '\x04':
    pbVar5 = (byte *)(param_1 + 8);
    if (cVar1 != '\x04') {
      pbVar5 = (byte *)0x0;
    }
    auVar10._0_4_ = (float)*pbVar5;
    auVar10._4_12_ = SUB1612(ZEXT816(0),4);
    return auVar10._0_8_;
  case '\x05':
    plVar3 = (longlong *)(param_1 + 8);
    if (cVar1 != '\x05') {
      plVar3 = (longlong *)0x0;
    }
    auVar8._0_4_ = (float)*plVar3;
    auVar8._4_12_ = SUB1612(ZEXT816(0),4);
    return auVar8._0_8_;
  case '\x06':
    break;
  case '\a':
    puVar4 = (ulonglong *)(param_1 + 8);
    if (cVar1 != '\a') {
      puVar4 = (ulonglong *)0x0;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *puVar4;
    auVar9 = vcvtpd2ps_avx(auVar9);
    return auVar9._0_8_;
  }
  puVar4 = (ulonglong *)(param_1 + 8);
  if (cVar1 != '\x06') {
    puVar4 = (ulonglong *)0x0;
  }
  uVar2 = *puVar4;
  if ((longlong)uVar2 < 0) {
    return (ulonglong)(uint)(float)uVar2;
  }
  auVar7._0_4_ = (float)(longlong)uVar2;
  auVar7._4_12_ = SUB1612(ZEXT816(0),4);
  return auVar7._0_8_;
}




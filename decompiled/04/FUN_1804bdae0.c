// FUN_1804bdae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bdae0 */

void FUN_1804bdae0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [64];
  float local_res8;
  float local_resc;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  auVar6 = ZEXT464(*(uint *)(param_1 + 0x60));
  lVar1 = (longlong)param_2;
  lVar2 = lVar1 * 0x1c;
  FUN_1804bcc10(&local_78,param_1,param_2,*(uint *)(param_1 + 0x60),0);
  fVar3 = local_70 - local_78;
  fVar5 = local_6c - local_74;
  fVar4 = 0.5;
  local_res8 = fVar3 * (float)(&DAT_1807b7f38)[lVar1 * 7] + local_78 + 0.5 +
               auVar6._0_4_ * *(float *)(&DAT_1807b7f30 + lVar2);
  local_resc = fVar5 * (float)(&DAT_1807b7f3c)[lVar1 * 7] + local_74 + 0.5 +
               auVar6._0_4_ * *(float *)(&DAT_1807b7f34 + lVar2);
  FUN_1804dc050(*(undefined8 *)(param_1 + 0x2c8),&local_res8,auVar6._0_8_,
                *(float *)(&DAT_1807b7f48 + lVar2) - 0.7853982,*(float *)(&DAT_1807b7f48 + lVar2),0)
  ;
  local_res8 = fVar3 * (float)(&DAT_1807b7f40)[lVar1 * 7] + local_78 + fVar4 +
               auVar6._0_4_ * *(float *)(&DAT_1807b7f30 + lVar2);
  local_resc = fVar5 * (float)(&DAT_1807b7f44)[lVar1 * 7] + local_74 + fVar4 +
               auVar6._0_4_ * *(float *)(&DAT_1807b7f34 + lVar2);
  FUN_1804dc050(*(undefined8 *)(param_1 + 0x2c8),&local_res8,auVar6._0_8_,
                *(float *)(&DAT_1807b7f48 + lVar2),*(float *)(&DAT_1807b7f48 + lVar2) + 0.7853982,0)
  ;
  lVar1 = *(longlong *)(param_1 + 0x2c8);
  FUN_1804d9a00(lVar1,*(undefined8 *)(lVar1 + 0x58),*(undefined4 *)(lVar1 + 0x50),param_3,param_4,0,
                0x7f7fffff);
  *(undefined4 *)(lVar1 + 0x50) = 0;
  return;
}




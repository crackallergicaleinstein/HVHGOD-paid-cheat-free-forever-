// FUN_18052b6f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052b6f0 */

void FUN_18052b6f0(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ushort *puVar9;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  
  sVar1 = *(short *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x4970 +
                    ((longlong)param_1 * 0x15 + (longlong)param_2) * 4);
  if ((((DAT_180b909b0 != 0) && (-1 < sVar1)) &&
      ((int)sVar1 <
       (int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) / 0x68)))
     && (puVar9 = (ushort *)((longlong)sVar1 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58)),
        puVar9 != (ushort *)0x0)) {
    lVar6 = FUN_180529500(param_1,param_2);
    uVar2 = *puVar9;
    iVar8 = 3 - (uint)(param_1 != 0);
    plVar7 = (longlong *)
             (((((ulonglong)uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)(uVar2 >> 8)) * 0x100000001b3 & DAT_180cc9cb8) * 0x10 + DAT_180cc9ca0);
    lVar4 = plVar7[1];
    if (lVar4 != DAT_180cc9c90) {
      plVar7 = (longlong *)*plVar7;
      uVar3 = *(ushort *)(lVar4 + 0x10);
      while ((uVar2 != uVar3 && ((longlong *)lVar4 != plVar7))) {
        lVar4 = *(longlong *)(lVar4 + 8);
        uVar3 = *(ushort *)(lVar4 + 0x10);
      }
    }
    FUN_18021a5b0(plVar7,uVar2,iVar8);
    if (param_2 == 0xf) {
      local_58._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar5[0xf] = 0;
      auVar5._0_15_ = local_58._1_15_;
      local_58 = auVar5 << 8;
      local_48 = 0;
      local_40 = 0xf;
      FUN_1800ce320(&DAT_180cc8140,iVar8,local_58);
      DAT_180c63130 = iVar8;
      if (param_1 == 0) {
        DAT_180cc8150 = 0;
      }
      else {
        DAT_180cc8152 = 0;
      }
    }
    else {
      FUN_1801d6820(&DAT_180cc8068,*puVar9,iVar8);
    }
    FUN_180113930(lVar6 + 0x200,"Native item restored",0x14);
    *(undefined4 *)(lVar6 + 0x220) = 0;
  }
  return;
}




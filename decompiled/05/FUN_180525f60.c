// FUN_180525f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180525f60 */

ulonglong FUN_180525f60(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  ulonglong in_RAX;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  
  if ((DAT_180b909b0 != 0) && (-1 < param_2)) {
    lVar7 = *(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58);
    in_RAX = -(lVar7 >> 0x3f);
    if ((param_2 < (int)(lVar7 / 0x68) + (int)(lVar7 >> 0x3f) + (int)in_RAX) &&
       (puVar6 = (uint *)((longlong)param_2 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58)),
       puVar6 != (uint *)0x0)) {
      uVar3 = *puVar6;
      if (uVar3 != 0) {
        puVar4 = (ulonglong *)
                 ((((ulonglong)((uVar3 & 0xffff) >> 8) ^
                   ((ulonglong)(uVar3 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3
                  & DAT_180cc9cb8) * 0x10 + DAT_180cc9ca0);
        in_RAX = puVar4[1];
        if (in_RAX == DAT_180cc9c90) {
LAB_180526032:
          in_RAX = 0;
        }
        else {
          sVar1 = *(short *)(in_RAX + 0x10);
          while ((short)uVar3 != sVar1) {
            if (in_RAX == *puVar4) goto LAB_180526032;
            in_RAX = *(ulonglong *)(in_RAX + 8);
            sVar1 = *(short *)(in_RAX + 0x10);
          }
        }
        uVar5 = DAT_180cc9c90;
        if (in_RAX != 0) {
          uVar5 = in_RAX;
        }
        if ((uVar5 == DAT_180cc9c90) ||
           (lVar7 = *(longlong *)(uVar5 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar7 == 0))
        goto LAB_18052609c;
        if (*(longlong *)(puVar6 + 6) == 0) {
          uVar3 = *(uint *)(lVar7 + 0xac);
          in_RAX = 0;
          if (((byte)uVar3 & 0xc) != 0xc) {
            if ((uVar3 & 4) == 0) {
              if ((uVar3 & 8) == 0) goto LAB_180525fc2;
              uVar3 = 3;
            }
            else {
              uVar3 = 2;
            }
            uVar2 = 3 - (param_1 != 0);
            in_RAX = (ulonglong)uVar2;
            if (uVar3 != uVar2) goto LAB_18052609c;
          }
        }
      }
LAB_180525fc2:
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
LAB_18052609c:
  return in_RAX & 0xffffffffffffff00;
}



